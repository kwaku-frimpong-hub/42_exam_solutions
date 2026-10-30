#include <unistd.h>


int ft_atoi(char *str)
{
    int i;
    int neg;
    int res;

    i = 0;
    neg = 1;
    res = 0;
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
    return (res * neg);
}

void print_hex(int num)
{
    if (num <= 0)
        return;
    int last_digit = num % 16;
    char ch;
    print_hex(num / 16);
    ch = '0' + last_digit;
    if (last_digit > 9)
        ch = 'a' + (last_digit - 10);
    write(1, &ch, 1);
}

int main(int ac, char **av)
{
    int num;

    if (ac == 2)
    {
        num = ft_atoi(av[1]);
        if (num)
            print_hex(num);
        else
            write(1, "0", 1);
    }
    write(1, "\n", 1);
}
