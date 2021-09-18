#include "ft.h"

int	main(int argc, char *argv[])
{
	int	fd;

	fd = 0;
	if (argc == 1)
		write(2, "File name missing.\n", 19);
	else if (argc > 2)
		write (2, "Too many arguments.\n", 21);
	else
	{
		fd = open(argv[1], O_RDONLY);
		if (fd == -1)
			write(2, "Cannot read file.\n", 19);
		else
			ft_display_file(argv[1]);
		close(fd);		
	}
	return (0);
}
