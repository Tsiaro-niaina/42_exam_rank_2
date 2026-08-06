#include <unistd.h>

int	is_sep(char c)
{ 
	return (c == '\0' || c == ' ' || c == '\t');
}

void	capitalize(char *str)
{
	int i;
	char c;

	i = 0;
	while (str[i])
	{
		c = str[i];
		if (c >= 'A' && c <= 'Z')
			c = c + 32;
		if (c >= 'a' && c <= 'z' && is_sep(str[i + 1]))
			c = c - 32;
		write(1, &c, 1);
		i++;
	}
}

int	main(int argc, char **argv)
{
	int i;

	i = 1;
	while (i < argc)
	{
		capitalize(argv[i]);
	  	write(1, "\n", 1);
	  	i++;
	}
	if (argc == 1)
		write(1, "\n", 1);
	return (0);
}