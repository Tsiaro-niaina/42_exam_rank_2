#include <unistd.h>

void	rev_print(char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	i--;
	while (i >= 0)
		write (1, &s[i--], 1);
}

int	main (int argc, char **argv)
{
	if (argc == 2)
		rev_print(argv[1]);
	write (1, "\n", 1);
}