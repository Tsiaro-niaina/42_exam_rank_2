#ifndef LIST_H
#define LIST_H

typedef struct s_list
{
	struct s_list *next;
	int 		   data;
}				t_list;

#endif

t_list	*sort_list(t_list *lst, int (*cmp)(int, int))
{
	t_list *node;
	int tmp;
	int swapped;

	swapped = 1;
	while (swapped)
	{
		swapped = 0;
		node = lst;
		while (node && node->next)
		{
			if (!cmp(node->data, node->next->data))
			{
				tmp = node->data;
				node->data = node->next->data;
				node->next->data = tmp;
				swapped = 1;
			}
			node = node->next;
		}
	}
	return (lst);
}