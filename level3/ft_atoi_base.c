int	ft_atoi_base(const char *str, int str_base)
{
	char *s = (char *) str;
	int res = 0;
	int sign = 1;
	int i = 0;
	if (s[i] =='-')
	{
		if (s[i + 1] == '-')
			return (0);
		sign *= -1;
		i++;
	}
	while (s[i])
	{
		if (s[i] >= '0' && s[i] <= '9')
			res = res * str_base + (s[i] - '0');
		else if (s[i] >= 'A' && s[i] <= 'Z')
			res = res * str_base + (s[i] - '7');
		else if (s[i] >= 'a' && s[i] <= 'f')
			res = res * str_base + (s[i] - 'W');
		i++;
	}
	return (res * sign);
}

// #include <stdio.h>
// int main(void)
// {
// 	const char *str = "-1A";
// 	int str_base = 16;
// 	int result = ft_atoi_base(str, str_base);
// 	printf("The integer value of '%s' in base %d is: %d\n", str, str_base, result);
// 	return (0);
// }