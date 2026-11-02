#include <unistd.h>


void solve(char *str)
{
    int i = 0;
    while (str[i])
        i++;

    i--;
    while (i > -1)
    {
        write(1, str + i , 1);
        i--;
    }
}


int main(int ac, char **av)
{
    if (ac == 2)
        solve(av[1]);
    write(1, "\n", 1);
}
