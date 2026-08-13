#include <unistd.h>

void	first_word(char *s)
{
	int	i;

	i = 0;
	while ((s[i] == ' ' ) || (s[i] >= 9 && s[i] <= 13))
		i++;
	while (s[i] && s[i] != ' ' && s[i] != '\t')
	{
		write (1, &s[i], 1);
		i++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		first_word(argv[1]);
	write (1, "\n", 1);
	return (0);
}
