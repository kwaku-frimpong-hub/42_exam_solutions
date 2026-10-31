char    *ft_itoa(int nbr)
{
    static char res[15];
    int i = 14;
    long long num = nbr;

    if (nbr < 0)
        num *= -1;

    if (num == 0)
    {
        res[0] = '0';
        res[1] = '\0';
        return res;
    }

    res[i] = '\0';
    i--;
    while (num)
    {
        int last_digit = num % 10; //get last digit
        num /= 10; // remove last digit
        res[i] = '0' + last_digit;
        i--;
    }
    if (nbr < 0)
    {
        res[i] = '-';
        return res + i;
    }
    return res + i + 1;
}


// #include <stdio.h>
// #include <stdlib.h>

// int main(int ac, char **av)
// {
//     if (ac == 2)
//     {
//         printf("%s", ft_itoa(atoi(av[1])));
//     }
// }