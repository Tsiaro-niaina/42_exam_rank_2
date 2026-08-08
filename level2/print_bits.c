#include <unistd.h>

void	print_bits(unsigned char octet)
{
	int				i = 8;
	unsigned char	res;
	while ((i--) > 0)
	{
		res = (octet >> i & 1) + '0';
		write (1, &res, 1);
	}
}