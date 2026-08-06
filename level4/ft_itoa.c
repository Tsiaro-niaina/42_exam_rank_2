#include <stdlib.h>

int	len_int(long nbr)
{
	int	len;

	len = 0;
	if (nbr <= 0)
		len++;
	while (nbr)
	{
		nbr /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int nbr)
{
	long	n;
	int		len;
	int		neg;
	char	*result;

	n = nbr;
	len = len_int(n);
	result = malloc((len + 1) * sizeof(char));
	if (result == NULL)
		return (NULL);
	result[len] = '\0';
	neg = 0;
	if (n < 0)
	{
		neg = 1;
		n = -n;
	}
	if (n == 0)
		result[0] = '0';
	while (n)
	{
		result[--len] = n % 10 + '0';
		n /= 10;
	}
	if (neg)
		result[0] = '-';
	return (result);
}