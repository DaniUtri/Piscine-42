#include "ft.h" 

void	ft_display_file(char *str)
{
	int		fd;
	char	buf;

	fd = open(str, O_RDONLY);
	buf = 0;
	while (read(fd, &buf, 1))
		write(1, &buf, 1);
	close(fd);
}
