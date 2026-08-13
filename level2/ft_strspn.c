#include <stddef.h>

size_t	ft_strspn(const char *s, const char *accept)
{
	size_t	i;
	size_t	j;
	int		bool_found;

	i = 0;
	while (s[i])
	{
		j = 0;
		bool_found = 0;
		while (accept[j])
		{
			if (s[i] == accept[j])
			{
				bool_found = 1;
				break ;
			}
			j++;
		}
		if (bool_found == 0)
			return (i);
		i++;
	}
	return (i);
}

// #include <stdio.h>

// int main(int argc, char **argv)
// {
// 	if (argc == 3)
// 		printf("%zu\n", ft_strspn(argv[1], argv[2]));
// 	return (0);
// }