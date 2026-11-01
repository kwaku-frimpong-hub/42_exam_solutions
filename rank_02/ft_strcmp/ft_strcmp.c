int    ft_strcmp(char *s1, char *s2)
{
    int i = 0;
    while (s1[i] && s2[i])
    {
        int dif = s1[i] - s2[i];
        if (dif)
            return dif;
        i++;
    }
    return s1[i] - s2[i];
}