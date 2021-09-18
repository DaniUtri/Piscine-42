#include "include/ft.h"

int	main(int argc, char *argv[])
{
	int	i;
	int	b;

	b = 0;
	if (argc == 1)
		ft_read_stdin();
	else
	{
		i = 0;
		while (++i < argc)
		{
			if (read_f(argv, i) == -1)
				b = 1;
		}
	}
	if (b)
		return (1);
	return (0);
}

void	ft_read_stdin(void)
{
	char	buf;

	buf = 0;
	while (read(0, &buf, 1))
		write(1, &buf, 1);
}

int	read_f(char *argv[], int i)
{
	int		fd;
	char	buf;

	buf = 0;
	fd = open(argv[i], O_RDONLY);
	if (fd == -1)
		ft_werror(argv, i, strerror(errno));
	else
	{
		while (read(fd, &buf, 1))
			write(1, &buf, 1);
	}
	close(fd);
	return (fd);
}
