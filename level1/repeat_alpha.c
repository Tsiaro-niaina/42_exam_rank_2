#include <unistd.h>

void	repeat_alpha(char *s)
{
	int	i = 0;
	int	j = 0;
	int	repeat = 0;
	while (s[i])
	{
		if (s[i] >= 'a' && s[i] <= 'z')
			repeat = s[i] - 'a' + 1;
		else if (s[i] >= 'A' && s[i] <= 'Z')
			repeat = s[i] - 'A' + 1;
		else
			repeat = 1;
		j = 0;
		while (j < repeat)
		{
			write (1, &s[i], 1);
			j++;
		}
		i++;
	}
}

int	main (int argc, char **argv)
{
	if (argc == 2)
		repeat_alpha(argv[1]);
	write (1, "\n", 1);
}
