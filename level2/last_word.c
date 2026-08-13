#include <unistd.h>

void	last_word(char *s)
{
	int	i;
	int	start_word;
	int	end_word;

	i = 0;
	while (s[i])
		i++;
	i--;
	while (i >= 0 && (s[i] == ' ' || s[i] == '\t'))
		i--;
	end_word = i;
	while (i >= 0 && s[i] != ' ' && s[i] != '\t')
		i--;
	start_word = i + 1;
	while (start_word <= end_word)
		write (1, &s[start_word++], 1);
}

int main (int argc, char **argv)
{
	if (argc == 2)
		last_word(argv[1]);
	write (1, "\n", 1);
	return (0);
}