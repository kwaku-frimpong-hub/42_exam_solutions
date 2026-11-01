int             max(int* tab, unsigned int len)
{
    unsigned int i = 0;
    int ans = 0;
    while (i < len)
    {
        if (i == 0 || ans < tab[i])
            ans = tab[i];  
        i++;  
    }
    return ans;
}
