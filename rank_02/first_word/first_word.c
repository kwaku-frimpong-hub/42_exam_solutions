#include <unistd.h>



void solve(char *str)
{
    int l = 0, r = 0;
    int i = 0;

    while (str[i] && str[i] == ' ')
        i++;
    l = i;

    while (str[i] && str[i] != ' ')
        i++;
    r = i;

    write(1, str+l, r-l);
}

int main(int ac, char **av)
{
    if (ac == 2)
        solve(av[1]);
    write(1, "\n", 1);
}
