#include <unistd.h>

void	camel_to_snake(char *s)
{
	int		i;
	char	c;

	i = 0;
	while (s[i])
	{
		if (s[i] >= 'A' && s[i] <= 'Z')
		{
			write(1, "_", 1);
			c = s[i] + 32;
		}
		else
			c = s[i];
		write(1, &c, 1);
		i++;
	}
}

int main (int argc, char **argv)
{
	if (argc == 2)
		camel_to_snake(argv[1]);
	write (1, "\n", 1);
}