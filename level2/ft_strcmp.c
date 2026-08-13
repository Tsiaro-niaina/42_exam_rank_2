int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while ((s1[i] || s2[i]) && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

// #include <stdio.h>
// int main(void)
// {
// 	char *s1 = "Hello";
// 	char *s2 = "Hello";
// 	int result = ft_strcmp(s1, s2);
// 	if (result == 0)
// 		printf("The strings are equal.\n");
// 	else if (result < 0)
// 		printf("'%s' is less than '%s'.\n", s1, s2);
// 	else
// 		printf("'%s' is greater than '%s'.\n", s1, s2);
// 	return (0);
// }