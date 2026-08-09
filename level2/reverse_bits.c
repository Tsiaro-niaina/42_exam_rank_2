unsigned char	reverse_bits(unsigned char octet)
{
	int 			i = 8;
	unsigned char	res = 0;
	while ((i--) > 0)
	{
		res = res * 2 + (octet % 2);
		octet /= 2;
	}
	return (res);
}


// #include <stdio.h>
// int main(void)
// {
// 	unsigned char octet = 0b00001111; // Example input
// 	unsigned char reversed = reverse_bits(octet);
// 	printf("Original: %u, Reversed: %u\n", octet, reversed);
// 	return (0);
// }