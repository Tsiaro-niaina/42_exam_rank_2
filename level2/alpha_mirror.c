#include <unistd.h>

void	alpha_mirror(char *s)
{
	int		i;
	char	mirror;

	i = 0;
	while (s[i])
	{
		if (s[i] >= 'A' && s[i] <= 'Z')
			mirror = 'Z' - (s[i] - 'A');
		else if (s[i] >= 'a' && s[i] <= 'z')
			mirror = 'z' - (s[i] - 'a');
		else
			mirror = s[i];
		write (1, &mirror, 1);
		i++;
	}
}

int	main (int argc, char **argv)
{
	if (argc == 2)
		alpha_mirror(argv[1]);
	write (1, "\n", 1);
}
