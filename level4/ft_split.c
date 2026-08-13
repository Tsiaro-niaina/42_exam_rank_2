#include <stdlib.h>

static int word_len(char *str)
{
	int	i;

	i = 0;
	while (str[i] && str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
		i++;
	return (i);
}

static int count_words(char *str)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		while (str[i] && (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'))
			i++;
		if (str[i])
			count++;
		while (str[i] && str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
			i++;
	}
	return (count);
}

char **ft_split(char *str)
{
	int		i = 0;
	int		j = 0;
	int		k;
	char	**res;

	res = malloc(sizeof(char *) * (count_words(str) + 1));
	if (!res)
		return (NULL);
	while (str[i])
	{
		while (str[i] && (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'))
			i++;
		if (str[i])
		{
			k = 0;
			res[j] = malloc(sizeof(char) * (word_len(&str[i]) + 1));
			if (!res[j])
				return (NULL);
			while (str[i] && str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
				res[j][k++] = str[i++];
			res[j][k] = '\0';
			j++;
		}
	}
	res[j] = NULL;
	return (res);
}

// #include <stdio.h>

// char **ft_split(char *str);

// int main(void)
// {
//     char **res;
//     int i;

//     res = ft_split("  Hello\tworld\nthis is\ta testquote  		4 t");
//     if (!res) return 1;
//     i = 0;
//     while (res[i])
//     {
//         printf("%s\n", res[i]);
//         free(res[i]);
//         i++;
//     }
//     free(res);
//     return 0;
// }