typedef struct	s_list
{
	struct s_list	*next;
	void			*data;
}				t_list;
#include <string.h>

int	ft_list_size(t_list *begin_list)
{
	int i = 0;
	if (!begin_list)
		return (0);
	while (begin_list != NULL)
	{
		i++;
		begin_list = begin_list->next;
	}
	return (i);
}

// #include <stdio.h>
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

// int	main(void)
// {
// 	t_list	*lst;

// 	lst = new_node("Bonjour");
// 	lst->next = new_node("je");
// 	lst->next->next = new_node("suis");
// 	lst->next->next->next = new_node("Randy");

// 	printf("La liste : ");
// 	print_list(lst);

// 	int size = ft_list_size(lst);
// 	printf("Taille de la liste : %d\n", size);

// 	return (0);
// }