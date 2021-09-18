#include <stdlib.h>
#include "ft_stock_str.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *str)
{
	int	i;
	char	*copy;

	copy = malloc(sizeof(char *) * (ft_strlen(str) + 1));
	if (copy)
	{
		i = -1;
		while (++i < ft_strlen(str))
			copy[i] = str[i];
		copy[i] = '\0';
	}
	return (copy);
}

void	fill_struct(t_stock_str *stock, int ac, char **av)
{
	int	i;

	i = -1;
	while (++i < ac)
	{
		stock[i].size = ft_strlen(av[i]);
		stock[i].str = av[i];
		stock[i].copy = ft_strdup(av[i]);
	}
	stock[ac].str = 0;
}

struct	s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*stock;

	stock = malloc(sizeof(t_stock_str) * (ac + 1));
	if (stock)
		fill_struct(stock, ac, av);
	else
		stock = NULL;
	return (stock);
}
