char ft_tolower(char ch)
{
    if ('A' <= ch && ch <= 'Z')
        return ch + 32;
    return ch;
}

int get_val(char ch, int base)
{
    char *base_str = "0123456789abcdef";
    int i = 0;
    while (i < base)
    {
        if (ft_tolower(ch) == base_str[i])
            return i;
        i++;
    }
    return -1;
}

int     ft_atoi_base(const char *str, int str_base)
{
    int res = 0;
    int i = 0;
    int neg = 1;

    while (str[i] == ' ')
        i++;
    if (str[i] == '-' || str[i] == '+')
    {
        if (str[i] == '-')
            neg = -1;
        i++;
    }
    while (str[i])
    {
        int val = get_val(str[i], str_base);
        if (val == -1) 
            break;
        res = (res * str_base) + val;
        i++;
    }
    return res * neg;
}