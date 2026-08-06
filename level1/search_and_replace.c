#include <unistd.h>

void	search_and_replace(char *s, char to_search, char to_replace)
{
	int i = 0;
	while (s[i])
	{
		if (s[i] == to_search)
			s[i] = to_replace;
		write (1, &s[i], 1);
		i++;
	}
}

int main (int argc, char **argv)
{
	if (argc == 4 && argv[2][1] == '\0' && argv[3][1] == '\0')
		search_and_replace(argv[1], argv[2][0], argv[3][0]);
	write (1, "\n", 1);
}
