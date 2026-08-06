#include <unistd.h>

void	ft_putnbr(int n)
{
	if (n >= 10)
		ft_putnbr(n / 10);
	char c = n % 10 + '0';
	write (1, &c, 1);
}

int	ft_atoi(char *str)
{
	int i = 0;
	int	res = 0;
	while (str[i])
	{
		if (str[i] < '0' && str[i] > '9')
			return (-1);
		res = res * 10 + (str[i] - '0');
		i++;
	}
	return (res);	
}

int	is_prime (int n)
{
	int i = 2;
	if (n < 2)
		return (0);
	while (i * i <= n)
	{
		if (n % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int main (int argc, char **argv)
{
	int sum = 0;
	int i = 0;
	int nbr;
	if (argc == 2)
	{
		nbr = ft_atoi(argv[1]);
		while (i <= nbr)
		{
			if (is_prime(i))
				sum += i;
			i++;
		}
	}
	ft_putnbr(sum);
	write (1, "\n", 1);
	return (0);
}
