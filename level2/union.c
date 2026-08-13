#include <unistd.h>

void	ft_union(char *s, int *seen)
{
	int	i = 0;
	while (s[i])
	{
		if (seen[(unsigned int)s[i]] == 0)
		{
			write (1, &s[i], 1);
			seen[(unsigned int)s[i]] = 1;
		}
		i++;
	}
}


int main (int argc, char **argv)
{
	int	seen[128] = {0};
	if (argc == 3)
	{
		ft_union(argv[1], seen);
		ft_union(argv[2], seen);
	}
	write (1, "\n", 1);
	return (0);
}