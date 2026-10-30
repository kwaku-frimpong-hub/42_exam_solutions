#include <stdlib.h>

int     *ft_rrange(int start, int end)
{
    int arr_len = end - start + 1;
    int step = -1;
    int i = 0;
    int *res;

    if (end < start)
    {
        arr_len = start - end + 1;
        step = 1;
    }

    res = malloc(sizeof(int) * arr_len);
    if (!res)
        return NULL;

    while (i < arr_len)
    {
        res[i] = end;
        end += step;
        i++;
    }
    return res;
}