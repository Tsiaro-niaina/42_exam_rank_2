#ifndef FT_LIST_H
#define FT_LIST_H

typedef struct	s_list
{
	struct s_list	*next;
	void			*data;
}				t_list;

#endif

void ft_list_foreach(t_list *begin_list, void (*f)(void *))
{
	if (!begin_list || !f)
		return ;
	while (begin_list)
	{
		(*f)(begin_list->data);
		begin_list = begin_list->next;
	}
}

// #include <stdio.h>
// #include <stdlib.h>

// t_list	*new_node(void *data)
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
// 		printf("[%s] -> ", (char *)lst->data);
// 		lst = lst->next;
// 	}
// 	printf("NULL\n");
// }

// void	print_data(void *data)
// {
// 	printf("-> %s\n", (char *)data);
// }

// int	main(void)
// {
// 	t_list	*lst;

// 	lst = new_node("Bonjour");
// 	lst->next = new_node("je");
// 	lst->next->next = new_node("suis");
// 	lst->next->next->next = new_node("Randy");

// 	printf("La liste : ");
// 	print_list(lst);

// 	printf("\nft_list_foreach applique print_data sur chaque noeud :\n");
// 	ft_list_foreach(lst, print_data);

// 	return (0);
// }