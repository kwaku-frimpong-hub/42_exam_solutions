typedef struct s_list t_list;

struct s_list {
    int data;
    t_list *next;
};

// we will just bubble sort
t_list  *sort_list(t_list* lst, int (*cmp)(int, int))
{
    t_list *h1 = lst;
    while (h1)
    {
        t_list *h2 = h1->next;
        while (h2)
        {
            if (!cmp(h1->data, h2->data))
            {
                int tmp = h1->data;
                h1->data = h2->data;
                h2->data = tmp;
            }
            h2 = h2->next;
        }
        h1 = h1->next;
    }
    return lst;
}
