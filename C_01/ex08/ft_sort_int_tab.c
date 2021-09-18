void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	i_2;
	int	s;
	int	c;
	int	swap;

	c = 0;
	s = size - 1;
	while (c < s)
	{
		i = 0;
		i_2 = 1;
		while (i < s)
		{
			if (tab[i] > tab[i_2])
			{
				swap = tab[i];
				tab[i] = tab[i_2];
				tab[i_2] = swap;
			}
			i++;
			i_2++;
		}
		c++;
	}
}
