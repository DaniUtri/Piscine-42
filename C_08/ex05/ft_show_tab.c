#include <unistd.h>
#include "ft_stock_str.h"

void	ft_putstr(char *str)
{
	int	i;
	
	i = -1;
	while (str[++i])
		write(1, &str[i], 1);
}

void	ft_putnbr(int num)
{
	char	c;

	while ((unsigned int)num / 10 != 0)
		ft_putnbr((unsigned int)num / 10);
	c = ((unsigned int)num % 10) + 48;
	write(1, &c, 1);
}

void	ft_show_tab(struct s_stock_str *par)
{
	int	i;

	i = -1;
	while (par[++i].str != 0)
	{
		ft_putnbr(par[i].size);
		write(1, "\n", 1);
		ft_putstr(par[i].str);
		write(1, "\n", 1);
		ft_putstr(par[i].copy);
		write(1, "\n", 1);
	}
}
