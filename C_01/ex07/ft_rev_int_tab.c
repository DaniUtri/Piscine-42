void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	s;
	int	swap;

	i = 0;
	s = size - 1;
	while (i < (size / 2))
	{	
		swap = tab[i];
		tab[i] = tab[s];
		tab[s] = swap;
		i++;
		s--;
	}
}
