void	swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	sort_int_tab(int *tab, unsigned int size)
{
	int	i;

	i = 0;
	while (i < (int)size - 1)
	{
		if (tab[i] > tab[i + 1])
		{
			swap(&tab[i], &tab[i + 1]);
			i = 0;
		}
		else
			i++;
	}
}

// #include <stdio.h>

// int main(void)
// {
// 	int	tab[] = {5, 3, 2, 4, 1};
// 	int	size = sizeof(tab) / sizeof(tab[0]);
// 	int	i;

// 	printf("Avant le tri : ");
// 	for (i = 0; i < size; i++)
// 		printf("%d ", tab[i]);
// 	printf("\n");

// 	sort_int_tab(tab, size);

// 	printf("Après le tri : ");
// 	for (i = 0; i < size; i++)
// 		printf("%d ", tab[i]);
// 	printf("\n");

// 	return (0);
// }