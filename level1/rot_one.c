#include <unistd.h>

void	rot_1(char *s)
{
	int	i = 0;
	while (s[i])
	{
		if (s[i] == 'z' || s[i] == 'Z')
			s[i] -= 25;
		else if ((s[i] >= 'a' && s[i] <= 'y') || (s[i] >= 'A' && s[i] <= 'Y'))
			s[i] += 1;
		write (1, &s[i], 1);
		i++;
	}
}

int main (int argc, char **argv)
{
	if (argc == 2)
		rot_1(argv[1]);
	write (1, "\n", 1);
}