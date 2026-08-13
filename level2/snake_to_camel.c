#include <unistd.h>

void	snake_to_camel(char *s)
{
	int		i;
	char	c;

	i = 0;
	while (s[i])
	{
		if (s[i] == '_' && s[i + 1] != '\0')
		{
			if (s[i + 1] >= 'a' && s[i + 1] <= 'z')
				c = s[i + 1] - 32;
			else
				c = s[i + 1];
			write(1, &c, 1);
			i += 2;
		}
		else
		{
			c = s[i];
			write(1, &c, 1);
			i++;
		}
	}
}

int main(int argc, char **argv)
{
	int i = 1;

	while (i < argc)
	{
		snake_to_camel(argv[i]);
		write(1, "\n", 1);
		i++;
	}
	if (argc == 1)
		write(1, "\n", 1);
	return (0);
}