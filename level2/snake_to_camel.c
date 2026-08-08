#include <unistd.h>

void	snake_to_camel(char *s)
{
	int		i = 0;
	char	c;
	while (s[i])
	{
		if (s[i] == '_' && s[i + 1] != '\0')
		{
			c = s[i + 1] - 32;
			write(1, &c, 1);
			i += 2;
		}
		else
		{
			write(1, &s[i], 1);
			i++;
		}
	}
}