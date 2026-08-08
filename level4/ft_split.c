#include <stdlib.h>

static int	is_sep(char c)
{
	return (c == ' ' || c == '\t' || c == '\n');
}

static int	count_words(char *str)
{
	int	count;

	count = 0;
	while (*str)
	{
		while (*str && is_sep(*str))
			str++;
		if (*str)
			count++;
		while (*str && !is_sep(*str))
			str++;
	}
	return (count);
}

static int	word_len(char *str)
{
	int	len;

	len = 0;
	while (str[len] && !is_sep(str[len]))
		len++;
	return (len);
}

char	**ft_split(char *str)
{
	char	**result;
	int		i;
	int		j;
	int		k;
	int		len;

	result = malloc((count_words(str) + 1) * sizeof(char *));
	if (!result)
		return (NULL);
	i = 0;
	j = 0;
	while (str[i])
	{
		while (str[i] && is_sep(str[i]))
			i++;
		if (!str[i])
			break ;
		len = word_len(str + i);
		result[j] = malloc(len + 1);
		if (!result[j])
			return (NULL);
		k = 0;
		while (k < len)
		{
			result[j][k] = str[i + k];
			k++;
		}
		result[j][k] = '\0';
		i += len;
		j++;
	}
	result[j] = NULL;
	return (result);
}

// #include <stdio.h>
// #include <stdlib.h>

// char **ft_split(char *str);

// int main(void)
// {
//     char **res;
//     int i;

//     res = ft_split("  Hello\tworld\nthis is\ta test  ");
//     if (!res) return 1;
//     i = 0;
//     while (res[i])
//     {
//         printf("[%s]\n", res[i]);
//         free(res[i]);
//         i++;
//     }
//     free(res);
//     return 0;
// }