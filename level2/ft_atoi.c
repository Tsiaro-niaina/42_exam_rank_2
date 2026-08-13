int	ft_atoi(char *s)
{
	int	i;
	int	sign;
	int	res;

	i = 0;
	sign = 1;
	res = 0;
	while ((s[i] == ' ' || (s[i] >= 9) && s[i] <= 13))
		i++;
	if (s[i] == '-' || s[i] == '+')
	{
		if  (s[i] == '-')
			sign *= -1;
		i++;
	}
	while (s[i] >= '0' && s[i] <= '9' && s[i])
	{
		res = res * 10 + (s[i] - '0');
		i++;
	}
	return (res * sign);
}

// #include <stdio.h>
// int main(void)
// {
// 	char *str = "   -12345";
// 	int result = ft_atoi(str);
// 	printf("The integer value of '%s' is: %d\n", str, result);
// 	return (0);
// }