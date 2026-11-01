#include <stdlib.h>

int ft_strlen(char *str)
{
    int len = 0;
    while (str[len])
        len++;
    return len;
}

char    *ft_strdup(char *src)
{
    int s_len = ft_strlen(src);
    char *res = malloc(sizeof(char) * (s_len + 1));
    int i = 0;
    if (!res)
        return NULL;
    while (i < s_len)
    {
        res[i] = src[i];
        i++;
    }
    res[i] = 0;
    return res;
}
