#include <unistd.h>

int	main(int ac, char **av)
{
	int	i;
	int first;

	if (ac == 2)
	{
		first = 1;
		i = 0;
		while (av[1][i])
		{	
			while ((av[1][i] == ' ') || (av[1][i] >= 9 && av[1][i] <= 13))
				i++;
			if (!first && av[1][i])
				write (1, " ", 1);
			while (av[1][i] && av[1][i] != ' ' && av[1][i] != '\t')
			{
				write(1, &av[1][i], 1);
				first = 0;
				i++;
			}
		}
	}
	write (1, "\n", 1);
	return (0);
}