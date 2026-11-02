#include <unistd.h>

// not the most efficient but for understand purpose
int ft_strlen(char *str)
{
    int len = 0;
    while (str[len])
        len++;
    return len;
}

void solve (char *str, char *a, char *b)
{
    if (ft_strlen(b) > 1 || ft_strlen(a) > 1)
        return;

    int i = 0;
    while (str[i])
    {
        if (str[i] == a[0])
            write(1, &b[0], 1);
        else
            write(1, str+i, 1);
        i++;
    }
}

int main(int ac, char **av)
{
    if (ac == 4)
        solve(av[1], av[2], av[3]);
    write(1, "\n", 1);
}
