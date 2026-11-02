#include <unistd.h>

char rotate_char(char c, char base)
{
    int id = c - base;
    id = (id + 1) % 26;
    return base + id;
}

void solve(char *str)
{
    int i = 0;
    while (str[i])
    {
        char ch = str[i];

        if ('a' <= ch && ch <= 'z')
            ch = rotate_char(ch, 'a');
        else if ('A' <= ch && ch <= 'Z')
            ch = rotate_char(ch, 'A');
        
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
