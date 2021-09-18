#ifndef FT_H
#define FT_H

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>

int		count_lines(char *str, char buf, int fd);
void	ft_memtab(char *str, char **tab);
void	ft_filltab(char *str, char **tab);
char	**ft_parse_file(char *str);
void	ft_putstr(char *str);
#endif
