#include "include/ft.h"

void	ft_puts(char *str, int e)
{
	int	i;

	i = -1;
	while (str[++i])
		write(e, &str[i], 1);
}

int	ft_werror(char *argv[], int i, char *er)
{
	ft_puts(argv[0], 2);
	ft_puts(": ", 2);
	ft_puts(argv[i], 2);
	ft_puts(": ", 2);
	ft_puts(er, 2);
	ft_puts("\n", 2);
	return (1);
}

void	ft_write_title(char *str, int i)
{
	if (i > 3)
		write(1, "\n", 1);
	write(1, "==> ", 4);
	ft_puts(str, 1);
	write(1, " <==\n", 5);
}
