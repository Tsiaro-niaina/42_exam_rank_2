#include <unistd.h>

void capitalize(char *str)
{
	int i;
	char c;
	int start;

	i = 0;
	start = 1;
	while (str[i])
	{
		c = str[i];
		if (start && c >= 'a' && c <= 'z')
			c = c - 32;
		else if (!start && c >= 'A' && c <= 'Z')
			c = c + 32;
		if (str[i] == ' ' || str[i] == '\t')
			start = 1;
		else
			start = 0;
		write(1, &c, 1);
		i++;
	}
}

int main(int argc, char **argv)
{
	int i = 1;

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