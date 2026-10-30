// again just apply bubble sort
void sort_int_tab(int *tab, unsigned int size)
{
    unsigned int i = 0, j = 0;
    while (i < size)
    {
        j = i + 1;
        while (j < size)
        {
            if (tab[i] > tab[j])
            {
                int tmp = tab[i];
                tab[i] = tab[j];
                tab[j] = tmp;
            }
            j++;
        }
        i++;
    }
}
