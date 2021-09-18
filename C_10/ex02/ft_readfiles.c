#include "include/ft.h"

int	ft_readfiles(char *argv[], int argc)
{
	if (ft_twoargv(argv))
		return (1);
	if (ft_n_char(argv) == -1)
		return (1);
	return (ft_wfiles(argv, argc, ft_n_char(argv)));
}

int	ft_wfiles(char *argv[], int argc, int n_char)
{
	int	i;
	int	error;
	int	b;

	i = 2;
	error = 0;
	b = 0;
	while (++i < argc)
	{
		error = ft_parsef(argv, i, n_char, argc);
		if (error)
			b = 1;
	}
	if (b)
		return (1);
	return (0);
}

int	ft_parsef(char *argv[], int i, int n_char, int argc)
{
	int	fd;

	fd = open(argv[i], O_RDONLY);
	if (fd == -1)
		return (ft_werror(argv, i, strerror(errno)));
	else
	{
		if (argc > 4)
			ft_write_title(argv[i], i);
		ft_file_show(argv[i], n_char);
	}
	close(fd);
	return (0);
}
