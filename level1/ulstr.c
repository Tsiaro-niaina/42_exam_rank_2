#include <unistd.h>

void	ulstr(char *s)
{
	int		i;
	char	c;

	i = 0;
	while (s[i])
	{
		if (s[i] >= 'A' && s[i] <= 'Z')
			c = s[i] + 32;
		else if (s[i] >= 'a' && s[i] <= 'z')
			c = s[i] - 32;
		else
			c = s[i];
		write (1, &c, 1);
		i++;
	}
}

int main(int argc, char **argv)
{
	if (argc == 2)
		ulstr(argv[1]);
	write (1, "\n", 1);
}
