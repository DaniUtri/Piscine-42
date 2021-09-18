#ifndef FT_H
#define FT_H

#include <stdio.h>


#include <errno.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#include <libgen.h>

int	ft_len(char *str);
int	ft_no_options(char *str);
void	ft_putstr2(char *str);
int	ft_twoargv(char **str);
int	ft_invalidarg(char *str);
int	ft_pos_options(char **str);
int	ft_invalid_n(char **str);
int	ft_n_char(char **str);
void	ft_readstdin(int n_char, int fd, char buff);
int	ft_compt_char(char *str);
void	ft_fill_str(char *str, char *tab);
int	ft_readfiles(char *argv[], int argc);
int	ft_wfiles(char *argv[], int argc, int n_char);
int	ft_parsef(char *argv[], int i, int n_char, int argc);
void	ft_file_show(char *f, int n_char);
int	ft_werror(char *argv[], int i, char *er);
void	ft_puts(char *str, int e);
void	ft_write_title(char *str, int i);
#endif
