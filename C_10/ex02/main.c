#include "include/ft.h"

int	main(int argc, char *argv[])
{
	int	error;

	error = 0;
	if (argc < 3)
		error = ft_no_options(argv[0]);
	else if (argc == 3)
		error = ft_pos_options(argv);
	else
		error = ft_readfiles(argv, argc);
	if (error)
		return (1);
	return (0);
}
