unsigned char	swap_bits(unsigned char octet)
{
	return (octet >> 4 | octet << 4);
}


//#include <stdio.h>
// int	main(void)
// {
// 	unsigned char	result;
// 	unsigned char	octet;
// 	octet = 0x52;
// 	result = swap_bits(octet);
// 	printf("Octet original: 0x%X\n", octet);
// 	printf("Octet apres swap: 0x%X\n", result);
// 	return (0);
// }