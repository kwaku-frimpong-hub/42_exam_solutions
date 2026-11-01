#include <unistd.h>

char ft_tolower(char ch)
{
    if ('A' <= ch && ch <= 'Z')
        return ch + 32;
    return ch;
}

void solve(char *str)
{
    int i = 0;
    while(str[i])
    {
        char ch = ft_tolower(str[i]);
        if ('A' <= str[i] && str[i] <= 'Z')
            write(1, "_", 1);
        write(1, &ch, 1);
        i++;
    }
}

int main(int ac, char **av)
{
    if (ac == 2)
        solve(av[1]);
    write(1, "\n", 1);
}
