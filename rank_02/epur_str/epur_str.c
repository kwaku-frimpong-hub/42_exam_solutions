#include <unistd.h>

int ft_strlen(char *str)
{
    int len = 0;
    while (str[len])
        len++;
    return len;
}

void solve(char *str)
{
    int s_len = ft_strlen(str);
    int i = 0;
    
    s_len--;
    while (i >-1 && str[s_len] == ' ')
        s_len--;
    
    while (i <= s_len)
    {
        if (str[i] != ' ')
            write(1, str + i, 1);
        else if (i > 0  && str[i-1] != ' ')
            write(1, " ", 1);
        i++;
    }
}

int main(int ac, char **av)
{
    if (ac == 2)
        solve(av[1]);
    write(1, "\n", 1);
}   
