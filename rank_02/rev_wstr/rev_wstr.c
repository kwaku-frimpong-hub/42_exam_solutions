#include <unistd.h>

int ft_strlen(char *str)
{
    int len = 0;
    while (str[len])
        len++;
    return len;
}

void ft_revstr(char *str, int l, int r)
{
    // this function will reverse string from l to r
    char tmp;
    while (l < r)
    {
        tmp = str[l];
        str[l] = str[r];
        str[r] = tmp;
        l++;
        r--;
    }
}

void solve(char *str)
{
    int s_len = ft_strlen(str);
    int l = 0;
    int r = s_len-1;

    ft_revstr(str, l, r);
    while (l < s_len)
    {
        while (str[l] && str[l] == ' ')
            l++;
        r = l;
        while (str[r] && str[r] != ' ')
            r++;
        ft_revstr(str, l, r-1);
        l = r;
    }
    write(1, str, s_len);
}

int main(int ac, char **av)
{
    if (ac == 2)
        solve(av[1]);
    write(1, "\n", 1);
}
