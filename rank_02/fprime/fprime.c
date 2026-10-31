#include <stdio.h>
#include <stdlib.h>

int is_prime(int num)
{
    int i = 2;
    while (i < num)
    {
        if (num % i == 0)
            return 0;
        i++;
    }
    return 1;
}

void solve(int num)
{
    int fac = 2;
    int show_sign = 0;

    while (fac <= num)
    {
        if (num % fac == 0 && is_prime(fac))
        {
            while (num % fac == 0)
            {
                if (show_sign)
                    printf("*");
                else
                    show_sign = 1;
                printf("%d", fac);
                num /= fac;
            }
        }
        fac++;
    }
}

int main(int ac, char **av)
{
    if (ac == 2)
        solve(atoi(av[1]));
    printf("\n");
}
