#include <stdlib.h>

int	ft_strlen(char *s)
{
	int i = 0;
	while (s[i])
		i++;
	return(i);
}

char	*ft_strdup(char *src)
{
	int		i = 0;
	char	*dup = malloc(sizeof(char) * (ft_strlen(src) + 1));
	if (!dup)
		return (NULL);
	while (src[i])
	{
		dup[i] = src[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}

// #include <stdio.h>
// int main(void)
// {
// 	char *src = "Hello, World!";
// 	char *dup = ft_strdup(src);
// 	if (dup)
// 	{
// 		printf("Original: %s\n", src);
// 		printf("Duplicate: %s\n", dup);
// 		free(dup);
// 	}
// 	else
// 	{
// 		printf("Memory allocation failed.\n");
// 	}
// 	return (0);
// }