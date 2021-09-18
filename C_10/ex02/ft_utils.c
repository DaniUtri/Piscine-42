#include "include/ft.h"

void	ft_fill_str(char *str, char *tab)
{
	int		fd;
	char	buff;
	int		i;

	fd = open(str, O_RDONLY);
	buff = 0;
	i = 0;
	while (read(fd, &buff, 1))
	{
		tab[i] = buff;
		i++;
	}
	tab[i] = 0;
	close(fd);
}

int	ft_n_char(char **str)
{
	int	n;
	int	i;

	n = 0;
	i = -1;
	while (str[2][++i])
	{
		if (str[2][i] < 48 || str[2][i] > 57)
			return (ft_invalid_n(str));
		n = n * 10 + str[2][i] - 48;
	}
	return (n);
}

int	ft_twoargv(char **str)
{
	int	error;

	error = 0;
	if (ft_len(str[1]) < 2)
		error = ft_invalidarg(str[0]);
	else if (ft_len(str[1]) == 2)
	{
		if (str[1][0] != 45 || str[1][1] != 99)
			error = ft_invalidarg(str[0]);
	}
	else
		error = ft_invalidarg(str[0]);
	if (error)
		return (1);
	return (0);
}
