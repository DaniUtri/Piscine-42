#include "ft.h"
#include <stdio.h>

int	count_lines(char *str, char buf, int fd)
{
	int	n_lines;
	int	new;

	fd = open(str, O_RDONLY);
	n_lines = 0;
	new = 1;
	if (fd == -1)
	{
		close(fd);
		return (n_lines);
	}
	while (read(fd, &buf, 1))
	{
		if (buf != 10 && new)
		{
			n_lines++;
			new = 0;
		}
		if (buf == 10)
			new = 1;
	}
	close(fd);
	return (n_lines);
}

void	ft_memtab(char *str, char **tab)
{
	int		fd;
	char	buf;
	int		n_c;
	int		i;

	fd = open(str, O_RDONLY);
	buf = 0;
	n_c = 0;
	i = -1;
	if (fd == -1)
		close(fd);
	else
	{
		while (read(fd, &buf, 1))
		{
			n_c++;
			if (buf == 10)
			{
				tab[++i] = malloc(sizeof(char *) * (n_c + 1));
				n_c = 0;	
			}
		}
	}
	close(fd);
}

void	ft_filltab(char *str, char **tab)
{
	int		fd;
	char	buf;
	int		i;
	int		j;

	fd = open(str, O_RDONLY);
	buf = 0;
	i = 0;
	j = -1;
	if (fd == -1)
		close(fd);
	else
	{
		while (read(fd, &buf, 1))
		{
			tab[i][++j] = buf;
			if (buf == 10)
			{
				tab[i][++j] = 0;
				j = -1;
				i++;
			}
		}
	}
	close(fd);
}

char	**ft_parse_file(char *str)
{
	char	**tab;
	char	buf;
	int		fd;

	buf = 0;
	fd = 0;
	tab = malloc(sizeof(char **) * (count_lines(str, buf, fd) + 1));
	tab[count_lines(str, buf, fd)] = 0;
	if (tab)
	{
		ft_memtab(str, tab);
		ft_filltab(str, tab);
	}
	return (tab);
}
