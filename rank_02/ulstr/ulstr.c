#include <unistd.h>

char ft_toupper(char ch)
{
    if ('a' <= ch && ch <= 'z')
        return ch - 32;
    return ch;
}

char ft_tolower(char ch)
{
    if ('A' <= ch && ch <= 'Z')
        return ch + 32;
    return ch;
}

void solve(char *str)
{
    int i = 0;
    while (str[i])
    {
        char ch = str[i];

        if ('a' <= ch && ch <= 'z')
            ch = ft_toupper(ch);
        else if ('A' <= ch && ch <= 'Z')
            ch = ft_tolower(ch);
        
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
