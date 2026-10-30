#include <unistd.h>

int is_prime(int num)
{
    // not the most efficient way but a prime number is only divisible by 1 and itself
    // hence started from 2
    int i = 2; // again we start with 2 because one divides every number

    while (i < num)
    {
        if ((num % i) == 0)
            return 0;
        i++;
    }
    return 1;
}

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

void solve (char *str)
{
    int nbr = ft_atoi(str);
    if (nbr < 0)
    {
        write(1, "0", 1);
        return;
    }
    int i = 2; // because two is the first prime number
    int ans = 0;
    while (i <= nbr)
    {
        if (is_prime(i))
            ans += i;
        i++;
    }

    if (ans)
        print_nbr(ans);
    else
        write(1, "0", 1);
}

int main(int ac, char **av)
{
    if (ac == 2)
        solve(av[1]);
    else
        write(1, "0", 1);
    write(1, "\n", 1);
}
