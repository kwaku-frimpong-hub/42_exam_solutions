#include <unistd.h>

char ft_toupper(char ch)
{
    if ('a' <= ch  && ch <= 'z')
        return ch - 32;
    return ch;
}

char ft_tolower(char ch)
{
    if ('A' <= ch && ch <= 'Z')
        return ch + 32;
    return ch;
}

void process_str(char *str)
{
    int i = 0;

    while (str[i])
    {
        char ch = ft_tolower(str[i]);
        if ( i-1 < 0 || str[i-1] == ' ')
            ch = ft_toupper(ch);
        write(1, &ch, 1);
        i++;
    }
}

int main(int ac, char **av)
{
    int i = 1;
    if (ac == 1)
    {
        write(1, "\n", 1);
        return 0;
    }

    while (i < ac)
    {
        process_str(av[i]);
        write(1, "\n", 1);
        i++;
    }
    return 0;
}
