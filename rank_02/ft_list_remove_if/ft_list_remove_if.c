#include <stdlib.h>

typedef struct      s_list
{
    struct s_list   *next;
    void            *data;
}                   t_list;


// well we need to pay attention 3 condition (or 2 i guess)
// when the node to remove is the beginning of list (make the 2nd node the head list)
// when the node to remove is at the middle or end of list (make the prev node next = the current node next)
void ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
    t_list  *trav;
    t_list  *prev;
    t_list  *to_free;

    if (!begin_list || !*begin_list)
        return ;
    trav = *begin_list;
    prev = NULL;
    while (trav)
    {
        if (cmp(trav->data, data_ref) == 0)
        {
            to_free = trav;
            if (!prev)
                *begin_list = trav->next; // cond 1, make node the head
            else
                prev->next = trav->next; // cond 2
            trav = trav->next;
            free(to_free);
        }
        else
        {
            prev = trav;
            trav = trav->next;
        }
    }
}
