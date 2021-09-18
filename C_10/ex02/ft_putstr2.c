#include "include/ft.h"

void	ft_putstr2(char *str)
{
	int	i;

	i = -1;
	while (str[++i])
		write(2, &str[i], 1);
}
