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

int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

int main(int ac, char **av)
{
    if (ac == 3)
    {
        int n1 = ft_atoi(av[1]);
        int n2 = ft_atoi(av[2]);
        int res = gcd(n1, n2);
        print_nbr(res); 
    }
    write(1, "\n", 1);
}
