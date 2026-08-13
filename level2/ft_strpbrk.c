#include <stdlib.h>

char	*ft_strpbrk(const char *s1, const char *s2)
{
	int	i = 0;
	int	j = 0;
	while (s1[i])
	{
		j = 0;
		while (s2[j])
		{
			if (s1[i] == s2[j])
				return (char *)&s1[i];
			j++;
		}
		i++;
	}
	return (NULL);
}


// #include <stdio.h>
// int main(void)
// {
// 	const char *s1 = "Hello, World!";
// 	const char *s2 = "aeiou";
// 	char *result = ft_strpbrk(s1, s2);
// 	if (result)
// 		printf("First occurrence of any character from s2 in s1: %c\n", *result);
// 	else
// 		printf("No characters from s2 found in s1.\n");
// 	return (0);
// }