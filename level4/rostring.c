#include <unistd.h>

int	print_rest_of_words(char *s, int start)
{
	int	i;
	int	first;

	i = start;
	first = 1;
	while (s[i])
	{
		while (s[i] == ' ' || s[i] == '\t')
			i++;
		if (s[i] && !first)
			write(1, " ", 1);
		while (s[i] && s[i] != ' ' && s[i] != '\t')
		{
			write(1, &s[i], 1);
			first = 0;
			i++;
		}
	}
	return (!first);
}

void	write_first_word(char *s, int start, int end)
{
	while (start < end)
		write(1, &s[start++], 1);
}

int	main(int argc, char **argv)
{
	int	i;
	int	first_word_start;

	if (argc >= 2)
	{
		i = 0;
		while (argv[1][i] == ' ' || argv[1][i] == '\t')
			i++;
		first_word_start = i;
		while (argv[1][i] && argv[1][i] != ' ' && argv[1][i] != '\t')
			i++;
		if (print_rest_of_words(argv[1], i))
			write(1, " ", 1);
		write_first_word(argv[1], first_word_start, i);
	}
	write(1, "\n", 1);
	return (0);
}
