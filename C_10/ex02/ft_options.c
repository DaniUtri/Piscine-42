#include "include/ft.h"

int	ft_pos_options(char **str)
{
	int		fd;
	char	buff;

	fd = 0;
	buff = 0;
	if (ft_twoargv(str))
		return (1);
	if (ft_n_char(str) == -1)
		return (1);
	ft_readstdin(ft_n_char(str), fd, buff);
	return (0);
}

void	ft_readstdin(int n_char, int fd, char buff)
{
	fd = open("stdin.txt", O_TRUNC, 0644);
	close(fd);
	fd = open("stdin.txt", O_WRONLY | O_CREAT | O_APPEND, 0644);
	while (read(0, &buff, 1))
		write(fd, &buff, 1);
	close(fd);
	ft_file_show("stdin.txt", n_char);
}

void	ft_file_show(char *f, int n_char)
{
	int		i;
	int		total_char;
	char	*str;

	total_char = ft_compt_char(f);
	str = malloc(sizeof(char *) * (total_char + 1));
	ft_fill_str(f, str);
	i = total_char - n_char - 1;
	while (++i < total_char)
		write(1, &str[i], 1);
	free(str);
}

int	ft_compt_char(char *str)
{
	int		fd;
	char	buff;
	int		c;

	fd = open(str, O_RDONLY);
	buff = 0;
	c = 0;
	while (read(fd, &buff, 1))
		c++;
	close(fd);
	return (c);
}
