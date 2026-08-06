#include <unistd.h>

int main(int argc, char **argv)
{
	int i;
	int end;
	int start;

	if (argc == 2)
	{
		i = 0;
		while (argv[1][i])
			i++;
		i--;
		while (i >= 0)
		{
			while (i >= 0 && (argv[1][i] == ' ' || argv[1][i] == '\t'))
				i--;
			end = i;
			while (i >= 0 && argv[1][i] != ' ' && argv[1][i] != '\t')
				i--;
			start = i + 1;
			while (start <= end)
				write(1, &argv[1][start++], 1);
			if (i >= 0 && end >= 0)
				write(1, " ", 1);
		}
	}
	write(1, "\n", 1);
	return (0);
}