#include "include/ft.h"

void	ft_puts(char *str, int e)
{
	int	i;

	i = -1;
	while (str[++i])
		write(e, &str[i], 1);
}

void	ft_werror(char *argv[], int i, char *er)
{
	ft_puts(argv[0], 2);
	ft_puts(": ", 2);
	ft_puts(argv[i], 2);
	ft_puts(": ", 2);
	ft_puts(er, 2);
	ft_puts("\n", 2);
}
