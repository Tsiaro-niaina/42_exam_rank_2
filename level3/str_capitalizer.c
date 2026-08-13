#include <unistd.h>

void capitalize(char *str)
{
	int i;
	int start;

	i = 0;
	start = 1;
	while (str[i])
	{
		if (start && str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 32;
		else if (!start && str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		if (str[i] == ' ' || str[i] == '\t')
			start = 1;
		else
			start = 0;
		write(1, &str[i], 1);
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