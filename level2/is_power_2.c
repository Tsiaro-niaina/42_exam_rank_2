int	is_power_of_2(unsigned int n)
{
	if (n == 0)
		return (0);
	while (n % 2 == 0)
		n = n / 2;
	return(n == 1);
}

// #include <stdio.h>
// int main(void)
// {
// 	unsigned int n = 16; // Example input
// 	if (is_power_of_2(n))
// 		printf("%u is a power of 2.\n", n);
// 	else
// 		printf("%u is not a power of 2.\n", n);
// 	return (0);
// }