#ifndef FT_LIST_H
#define FT_LIST_H

typedef struct s_list
{
	struct s_list 	*next;
	void			*data;
}				t_list;

#endif

#include <stdlib.h>
#include <stdio.h>

void ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)(void *, void *))
{
	if (!begin_list || !*begin_list || !cmp)
		return ;

	t_list	*current;
	t_list	*prev;
	t_list	*next;

	prev = 0;
	current = *begin_list;
	while (current)
	{
		if (cmp(current->data, data_ref) == 0)
		{
			next = current->next;
			if (prev)
				prev->next = next;
			else
				*begin_list = next;
			free(current);
			current = next;
		}
		else
		{
			prev = current;
			current = current->next;
		}
	}
}

// t_list    *new_node(void *data)
// {
//     t_list    *node = malloc(sizeof(t_list));
//     node->data = data;
//     node->next = NULL;
//     return (node);
// }


// void    print_list(t_list *list)
// {
//     while (list)
//     {
//         printf("[%s] -> ", (char *)list->data);
//         list = list->next;
//     }
//     printf("NULL\n");
// }


// int    cmp(void *a, void *b)
// {
//     char *s1 = (char *)a;
//     char *s2 = (char *)b;
//     while (*s1 && *s2 && *s1 == *s2)
//     {
//         s1++;
//         s2++;
//     }
//     return (*s1 - *s2);
// }

// int    main(void)
// {

//     t_list *liste = new_node("A");
//     liste->next = new_node("B");
//     liste->next->next = new_node("A");
//     liste->next->next->next = new_node("C");
//     liste->next->next->next->next = new_node("A");

//     printf("AVANT  : ");
//     print_list(liste);

//     ft_list_remove_if(&liste, "A", cmp);

//     printf("APRÈS  : ");
//     print_list(liste);
// }
