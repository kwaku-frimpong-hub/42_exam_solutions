int ft_strlen(char *str)
{
    int len = 0;
    while (str[len])
        len++;
    return len;
}

char    *ft_strrev(char *str)
{
    int l = 0, r = ft_strlen(str) -1;
    char tmp;

    while (l < r)
    {
        tmp = str[l];
        str[l] = str[r];
        str[r] = tmp;
        r--;
        l++;
    }
    return str;
}