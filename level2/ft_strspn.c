#include <stddef.h>

size_t	ft_strspn(const char *s, const char *accept)
{
	size_t	i = 0;
	size_t	j = 0;
	int		bool_found;
	while (s[i])
	{
		j = 0;
		bool_found = 0;
		while (accept[j])
		{
			if (s[i] == accept[j])
				bool_found = 1;
			j++;
		}
		if (bool_found == 0)
			return (i);
		i++;
	}
	return (i);
}