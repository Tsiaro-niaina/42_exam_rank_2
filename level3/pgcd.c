#include <stdio.h>
#include <stdlib.h>

int	pgcd(int a, int b)
{
	if (b == 0)
		return (a);
	return (pgcd(b, a % b));
}

int	main(int argc, char **argv)
{
	int result;

	if (argc == 3)
	{
		result = pgcd(atoi(argv[1]), atoi(argv[2]));
		printf("%d", result);
	}
	printf("\n");
	return (0);
}