#include <string.h>

int	ft_strlen(char *s)
{
	int i = 0;
	while (s[i])
		i++;
	return(i);
}

char	*ft_strdup(char *src)
{
	char	*dup = malloc(sizeof(char) * (ft_strlen(src) + 1));
	if (!dup)
		return NULL;
	int i = 0;
	while (src[i])
	{
		dup[i] = src[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}