#include "include/ft.h"

int	ft_no_options(char *str)
{
	ft_putstr2(str);
	ft_putstr2(": ");
	ft_putstr2("No correct options were given.\n");
	return (1);
}

int	ft_invalidarg(char *str)
{
	ft_putstr2(str);
	ft_putstr2(": ");
	ft_putstr2("Invalid  option.\n");
	return (1);
}

int	ft_invalid_n(char **str)
{
	ft_putstr2(str[0]);
	ft_putstr2(": ");
	ft_putstr2("Invalid number of bytes: <<");
	ft_putstr2(str[2]);
	ft_putstr2(">>\n");
	return (-1);
}
