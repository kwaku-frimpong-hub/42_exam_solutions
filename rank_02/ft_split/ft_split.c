#include <stdlib.h>

int ft_strlen(char *str)
{
    int len = 0;
    while (str[len])
        len++;
    return len;
}

char *ft_strdup(char *str, int start, int end)
{
    int s_len = end - start + 1;
    int i = 0;
    char *res = malloc(sizeof(char) * s_len);
    if (!res)
        return NULL;
    
    while (start < end)
    {
        res[i] = str[start];
        i++;
        start++;
    }
    res[i] = 0;
    return res;
}

int get_word_cnt(char *str)
{
    // this func should count all the words in the strings
    int flag = 0, cnt = 0;
    int i = 0;

    while (str[i])
    {
        if (str[i] == ' ')
        {
            cnt += flag;
            flag = 0;
        }else {
            flag = 1;
        }
        i++;
    }
    return cnt + flag;
}

void from_free_all(char **res, int end)
{
    int i = 0;
    while (i < end)
    {
        free(res[i]);
        i++;
    }
    free(res);
}

char    **ft_split(char *str)
{
    int     l = 0, r, i = 0;
    int     s_len = ft_strlen(str);
    char    **res = malloc(sizeof(char *) * (get_word_cnt(str) + 1));

    if (!res)
        return NULL;
    while (l < s_len)
    {
        while (str[l] == ' ')
            l++;
        if (!str[l])
            break;
        r = l;
        while (str[r] && str[r] != ' ')
            r++;
        res[i] = ft_strdup(str, l, r);
        if (!res[i])
        {
            from_free_all(res, i);
            return NULL;
        }
        i++;
        l = r;
    }
    res[i] = NULL;
    return res;
}


// #include <stdio.h>

// int main(int ac, char **av)
// {
//     if (ac == 2)
//     {
//         char **res = ft_split(av[1]);
//         int i = 0;
//         while (res[i])
//         {
//             printf("%s\n", res[i]);
//             free(res[i]);
//         }
//         free(res);
//     }
// }