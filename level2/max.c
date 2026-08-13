int	max(int* tab, unsigned int len)
{
	if (len == 0)
		return (0);
	unsigned int	i;
	int				max;

	i = 1;
	max = tab[0];
	while (i < len)
	{
		if (tab[i] > max)
			max = tab[i];
		i++;
	}
	return (max);
}

// #include <stdio.h>
// int main(void)
// {
// 	int	tab[] = {1, 3, 2, 5, 4};
// 	unsigned int	len = sizeof(tab) / sizeof(tab[0]);
// 	int	max_value = max(tab, len);
// 	printf("Le maximum de la liste est : %d\n", max_value);
// 	return (0);
// }