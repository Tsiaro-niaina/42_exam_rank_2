#include <stdlib.h>

int     *ft_rrange(int start, int end)
{
	int len;
	int i = 0;
	if (start >= end)
		len = start - end + 1;
	else
		len = end - start + 1;
	int *tab = malloc (sizeof (int) * len);
	if (!tab)
		return(0);
	while (i < len)
	{
		if (end >= start)
			tab[i] = end - i;
		else
			tab[i] = end + i;
		i++;
	}
	return (tab);
}