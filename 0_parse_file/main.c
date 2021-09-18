#include "ft.h"

int	main(int argc, char *argv[])
{
	char **tab;
	int		i;

	if (argc == 2)
	{
		tab = ft_parse_file(argv[1]);
	i = -1;
	while (tab[++i])
		ft_putstr(tab[i]);	
	}
	else
		ft_putstr("Número incorrecto de parámetros.\n");
}
