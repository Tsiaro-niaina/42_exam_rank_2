#include <stdio.h>
#include <unistd.h>

int do_op(int a, char c, int b)
{
	if (c == '+')
		return (a + b);
	else if (c == '-')
		return (a - b);
	else if (c == '*')
		return (a * b);
	else if (c == '/')
		return (a / b);
	else if (c == '%')
		return (a % b);
	return (0);
}

int	main(int argc, char **argv)
{
	if (argc == 4)
		printf("%d", do_op(atoi(argv[1][0]), argv[2][0], atoi(argv[3][0])));
	printf("\n");
	return (0);
}