unsigned int    lcm(unsigned int a, unsigned int b)
{
	if (a == 0 || b == 0)
		return (0);
	unsigned int multiple = a;
	while (multiple % b != 0)
		multiple += a;
	return (multiple);
}

// #include <stdio.h>
// int main(void)
// {
// 	unsigned int a = 12;
// 	unsigned int b = 18;
// 	unsigned int result = lcm(a, b);
// 	printf("The least common multiple of %u and %u is: %u\n", a, b, result);
// 	return (0);
// }