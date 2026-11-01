#include <unistd.h>

char ft_toupper(char ch)
{
    if ('a' <= ch && ch <= 'z')
        return ch - 32;
    return ch;
}

void solve(char *str)
{
    int i = 0;
    int cap_flag = 0;
    while (str[i])
    {
        char ch = str[i];

        if (str[i] == '_')
            cap_flag = 1;
        else{
            if (cap_flag)
            {
                ch = ft_toupper(ch);
                cap_flag = 0;
            }
            write(1, &ch, 1);
        }
        i++;
    }
}

int main(int ac, char **av)
{
    if (ac == 2)
        solve(av[1]);
    write(1, "\n", 1);
}
