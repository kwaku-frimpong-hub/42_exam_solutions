int     ft_atoi(const char *str)
{
    int res = 0;
    int i = 0;
    int neg = 1;
    while (str[i] == ' ')
        i++;
    if (str[i] == '+' || str[i] == '-')
    {
        if (str[i] == '-')
            neg = -1;
        i++;
    }
    while ('0' <= str[i] && str[i] <= '9')
    {
        res = (res * 10) + (str[i] - '0');
        i++;
    }
    return res * neg;
}
