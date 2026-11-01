#include <unistd.h>

char ft_reflect(char ch, char base)
{
    int id = ch - base;
    char res = base + 25 - id;
    return res;
}

void solve(char *str)
{
    int i = 0;
    while (str[i])
    {
        int ch = str[i];

        if ('A' <= ch && ch <= 'Z')
            ch = ft_reflect(ch, 'A');
        else if ('a' <= ch && ch <= 'z')
            ch = ft_reflect(ch, 'a');
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
