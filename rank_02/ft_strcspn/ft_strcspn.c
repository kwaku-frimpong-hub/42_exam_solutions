#include <stddef.h>

// not the most efficient approach
int ft_find(char ch, const char *str)
{
    int i = 0;
    while (str[i])
    {
        if (str[i] == ch)
            return i;
        i++;
    }
    return -1;
}

size_t ft_strcspn(const char *s, const char *reject)
{
    size_t res = 0;
    while (s[res] && ft_find(s[res],  reject) == -1)
        res++;
    return res;
}
