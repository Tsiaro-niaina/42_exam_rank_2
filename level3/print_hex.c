#include <unistd.h>

void	print_hex(unsigned int n)
{
	char *base = "0123456789abcdef";
	if (n >= 16)
    	print_hex(n / 16);
	write(1, &base[n % 16], 1);
}

int ft_atoi(char *str)
{
	int i;
	int nbr;

	i = 0;
	nbr = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		nbr = nbr * 10 + (str[i] - '0');
		i++;
	}
	return (nbr);
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		print_hex(ft_atoi(argv[1]));
	write(1, "\n", 1);
  	return (0);
}