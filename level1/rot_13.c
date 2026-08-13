#include <unistd.h>

void	rot_13(char *s)
{
	int		i;
	char	c;

	i = 0;
	while (s[i])
	{
		if ((s[i] >= 'a' && s[i] <= 'm') || (s[i] >= 'A' && s[i] <= 'M'))
			c = s[i] + 13;
		else if ((s[i] >= 'n' && s[i] <= 'z') || (s[i] >= 'N' && s[i] <= 'Z'))
			c = s[i] - 13;
		else
			c = s[i];
		write (1, &c, 1);
		i++;
	}
}

int main (int argc, char **argv)
{
	if (argc == 2)
		rot_13(argv[1]);
	write (1, "\n", 1);
}