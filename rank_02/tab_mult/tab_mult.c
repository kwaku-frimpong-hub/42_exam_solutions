#include <unistd.h>

int ft_atoi(char *str)
{
    // your standard atoi
    int i = 0;
    int neg = 1;
    int res = 0;

    while (str[i] == ' ')
        i++;
    if (str[i] == '+' || str[i] == '-')
    {
        if (str[i] == '-')
            neg = -1;
        i++;
    }
    while ('0' <= str[i] && str[i] <= '9')
    {
        res = (res * 10) + (str[i] - '0');
        i++;
    }
    return res * neg;
}

void print_nbr(int num)
{
    if (num <= 0)
        return;
    char ch;
    int last_digit = num % 10;
    print_nbr(num / 10);
    ch = '0' + last_digit;
    write(1, &ch, 1);
}

void solve(char *str)
{
    int num = ft_atoi(str);
    if (num < 0)
        return;

    int i = 1;
    while (i < 10)
    {
        char ch = '0' + i;
        int res = i * num;

        if (i != 1)
            write(1, "\n", 1);
        write(1, &ch, 1);
        write(1, " x ", 3);
        if (num)
        {
            print_nbr(num);
            write(1, " = ", 3);
            print_nbr(res);
        }
        else
        {
            write(1, "0", 1);
            write(1, " = ", 3);
            write(1, "0", 1);
        }
        i++;
    }
}

int main(int ac, char **av)
{
    if (ac == 2)
        solve(av[1]);
    write(1, "\n", 1);
}

