#include <unistd.h>

void	inter(char *s1, char *s2)
{
	int	seen[256] = {0};
	int	i;

	i = 0;
	while (s1[i])
	{
		int j = 0;
		while (s2[j])
		{
			if (s1[1] == s2[j] && seen[(unsigned int)s1[i]] == 0)
			{
				write (1, &s1[i], 1);
				seen[(unsigned int)s1[i]] = 1;
			}
			j++;
		}
		i++;
	}
}

int	main (int argc, char **argv)
{
	if (argc == 3)
		inter(argv[1], argv[2]);
	write (1, "\n", 1);
	return (0);
}