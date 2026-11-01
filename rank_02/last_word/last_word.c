#include <unistd.h>

// my approach was to reverse the string and then grabbing the first word
// printing it in reverse since it will be reversed
int ft_strlen(char *str)
{
    int len = 0;
    while (str[len])
        len++;
    return len;
}

void ft_revstr(char *str, int l, int r)
{
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
    int l = 0, r = s_len - 1;
    ft_revstr(str, l, r);

    int i = 0;

    while (str[i] && str[i] == ' ')
        i++;
    l = i;

    while (str[i] && str[i] != ' ')
        i++;
    r = i;

    ft_revstr(str, l, r-1);

    write(1, str+l, r-l);
}

int main(int ac, char **av)
{
    if (ac == 2)
        solve(av[1]);
    write(1, "\n", 1);
}
