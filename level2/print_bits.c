#include <unistd.h>

void	print_bits(unsigned char octet)
{
	int				i;
	unsigned char	res;

	i = 8;
	while ((i--) > 0)
	{
		res = (octet >> i & 1) + '0';
		write (1, &res, 1);
	}
}

// int main(void)
// {
// 	unsigned char octet = 0b10101010;
// 	print_bits(octet);
// 	write(1, "\n", 1);
// 	return (0);
// }