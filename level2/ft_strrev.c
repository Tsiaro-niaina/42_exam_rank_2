char	ft_strrev(char *s)
{
	char temp;
	int	i = 0;
	int j = 0;
	while (s[j])
		j++;
	j--;
	while (i < j)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
		i++;
		j--; 
	}
	return (s);
}