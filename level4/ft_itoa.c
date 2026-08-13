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

	n = (long)nbr;
	len = len_int(n);
	result = malloc(sizeof(char) * (len + 1));
	if (!result)
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

// int main(void)
// {
// 	int		nbr;
// 	char	*str;

// 	nbr = -2147483648;
// 	str = ft_itoa(nbr);
// 	if (str)
// 	{
// 		write(1, str, 11);
// 		write(1, "\n", 1);
// 		free(str);
// 	}
// 	return (0);
// }
