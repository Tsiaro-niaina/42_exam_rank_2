#include <unistd.h>

void	rev_print(char *s)
{
	int	i = 0;
	while (s[i])
		i++;
	i--;
	while (i >= 0)
	{
		write (1, &s[i], 1);
		i--;
	}
}

int	main (int argc, char **argv)
{
	if (argc == 2)
		rev_print(argv[1]);
	write (1, "\n", 1);
}