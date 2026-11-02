#include <unistd.h>

void print_n_times(char c, int n)
{
    while (n)
    {
        write(1, &c, 1);
        n--;
    }
}



void solve(char *str)
{
    int i = 0;
    while (str[i])
    {
        if ('a' <= str[i] && str[i] <= 'z')
            print_n_times(str[i], str[i] - 'a' + 1);
        else if ('A' <= str[i] && str[i]  <= 'Z')
            print_n_times(str[i], str[i] - 'A' + 1);
        else
            print_n_times(str[i], 1);
        i++;
    }
}

int main(int ac, char **av)
{
    if (ac == 2)
        solve(av[1]);
    write(1, "\n", 1);
}
