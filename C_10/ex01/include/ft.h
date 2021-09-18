#ifndef FT_H
#define FT_H

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#include <libgen.h>
#include <errno.h>

int	read_f(char *argv[], int i);
void	ft_read_stdin(void);
void	ft_werror(char *argv[], int i, char *er);
void	ft_puts(char *str, int e);
#endif

