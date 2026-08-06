#include <stdlib.h>
#include <stdio.h>

void	fprime(int nbr)
{
	int	div;

	div = 2;
	if (nbr < 0)
		return ;
	if (nbr == 1)
		printf("1");
	while (div <= nbr)
	{
    	if (nbr % div == 0)
    	{
        	printf("%d", div);
        	nbr /= div;

        	if (nbr != 1)
            	printf("*");
    	}
    	else
        	div++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		fprime(atoi(argv[1]));
	printf("\n");
	return (0);
}