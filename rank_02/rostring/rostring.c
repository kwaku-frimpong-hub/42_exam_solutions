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
    int i = 0;
    int s_len = ft_strlen(str);
    int is_first = 1, l, r;

    while (i < s_len)
    {
        while (str[i] && str[i] == ' ')
            i++;
        int start = i;

        while (str[i] && str[i] != ' ')
            i++;
        int end = i;
    
        if (is_first)
        {
            l = start;
            r = end;
            is_first = 0;
        }else if (end > start){
            write(1, str + start, end - start);
            write(1, " ", 1);
        }
    }
    write(1, str + l, r - l);
}

int main(int ac, char **av)
{
    if (ac > 1)
        solve(av[1]);
    write(1, "\n", 1);
}
