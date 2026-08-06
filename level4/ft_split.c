#include <stdlib.h>

int ft_strlen(char *s)
{
	int i = 0;
	while (s[i])
		i++;
	return (i);
}

char **ft_split(char *str)
{
	int	i = 0;
	int j;
	int k;
	int start;
	char	**split = malloc(sizeof(char *) * (ft_strlen(str) + 1));
	if (!split)
		return (NULL);
	while (str[i])
	{
		while (str[i] == ' ' || str[i] == '\t')
			i++;
		if (!str[i])
			break ;
		start = i;
		while (str[i] && str[i] != ' ' && str[i] != '\t')
			i++;
		split[j] = malloc(sizeof(char ) * (i - start + 1));
		k = 0;
		while (start < i)
		{
			split[j][k] = str[start];
			start++;
			k++;
		}
		split[j][k] = '\0';
		j++;
	}
	split[j] = NULL;
	return (split);
}