#include <stdlib.h>

int     *ft_range(int start, int end)
{
	int len;
	int i = 0;
	if (start >= end)
		len = start -  end + 1;
	else
		len = end - start + 1;
	int *tab = malloc (sizeof (int) * len); 
	if (!tab)
		return (0);
	while (i < len)
	{
		if (end >= start)
			tab[i] = start + i;
		else
			tab[i] = start - i;
		i++;
	}
	return (tab);
}

// #include <stdio.h>
// int main(void)
// {
// 	int start = 1;
// 	int end = 5;
// 	int *result = ft_range(start, end);
// 	int len = (end >= start) ? (end - start + 1) : (start - end + 1);
// 	for (int i = 0; i < len; i++)
// 	{
// 		printf("%d ", result[i]);
// 	}
// 	printf("\n");
// 	free(result);
// 	return (0);
// }