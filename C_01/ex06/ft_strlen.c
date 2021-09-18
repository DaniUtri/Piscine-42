int	ft_strlen(char *str)
{
	int	c;
	int	i;

	i = 0;
	c = 0;
	while (str[i] != '\0')
	{
		c++;
		i++;
	}
	return (c);
}
