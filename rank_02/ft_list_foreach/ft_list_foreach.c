typedef struct    s_list
{
    struct s_list *next;
    void          *data;
}                 t_list;


void    ft_list_foreach(t_list *begin_list, void (*f)(void *))
{
    // we will just loop through and apply f
    while(begin_list)
    {
        f(begin_list->data);
        begin_list = begin_list->next;
    }
}
