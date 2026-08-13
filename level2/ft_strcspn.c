#include <stddef.h>

size_t	ft_strcspn(const char *s, const char *reject)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (s[i])
	{
		j = 0;
		while (reject[j])
		{
			if (reject[j] == s[i])
				return (i);
			j++;
		}
		i++;
	}
	return (i);
}

// #include <stdio.h>
// int main(void)
// {
// 	const char *s = "Hello, World!";
// 	const char *reject = "aeiou";
// 	size_t result = ft_strcspn(s, reject);
// 	printf("The length of the initial segment of '%s' not containing any characters from '%s' is: %zu\n", s, reject, result);
// 	return (0);
// }