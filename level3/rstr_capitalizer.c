#include <unistd.h>

int	is_sep(char c)
{ 
	return (c == '\0' || c == ' ' || c == '\t');
}

void	reverse_capitalize(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		if (str[i] >= 'a' && str[i] <= 'z' && is_sep(str[i + 1]))
			str[i] -= 32;
		write(1, &str[i], 1);
		i++;
	}
}

int	main(int argc, char **argv)
{
	int i;

	i = 1;
	while (i < argc)
	{
		reverse_capitalize(argv[i]);
	  	write(1, "\n", 1);
	  	i++;
	}
	if (argc == 1)
		write(1, "\n", 1);
	return (0);
}