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
	t_list	*node;
	int 	tmp;
	int		swapped;

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


// #include <stdio.h>
// #include <stdlib.h>
// t_list	*new_node(int data)
// {
// 	t_list	*node;

// 	node = malloc(sizeof(t_list));
// 	node->data = data;
// 	node->next = NULL;
// 	return (node);
// }

// void	print_list(t_list *lst)
// {
// 	while (lst)
// 	{
// 		printf("[%d] -> ", lst->data);
// 		lst = lst->next;
// 	}
// 	printf("NULL\n");
// }

// int	cmp(int a, int b)
// {
// 	return (a <= b);
// }

// int	main(void)
// {
// 	t_list	*lst;

// 	lst = new_node(5);
// 	lst->next = new_node(2);
// 	lst->next->next = new_node(8);
// 	lst->next->next->next = new_node(1);
// 	lst->next->next->next->next = new_node(9);
// 	lst->next->next->next->next->next = new_node(3);

// 	printf("AVANT  : ");
// 	print_list(lst);

// 	lst = sort_list(lst, cmp);

// 	printf("APRÈS  : ");
// 	print_list(lst);

// 	return (0);
// }
