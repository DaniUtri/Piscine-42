/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   proto.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpenas-u <dpenas-u@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/22 22:52:48 by dpenas-u          #+#    #+#             */
/*   Updated: 2021/08/25 13:32:12 by dpenas-u         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PROTO_H
# define PROTO_H

# include <fcntl.h>
# include <unistd.h>
# include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>

typedef struct decomposed_num
{
    unsigned int    num;
    unsigned int    p_value;
    int                a_pos;
}                t_ndit;

typedef struct s_dict
{
    unsigned int    num_n;
    char            *num_a;
}				t_dit;


int        count_lines(char *dict_file);
void    fill_memory(char **dict, char *dict_file);
void    fill_with_lines(char **dict, char *dict_file, unsigned int l_fd);
void    iso_key_val(char **dict);
int        iso_key(char **dict, int i);
char    *iso_val(char **dict, int i);
t_dit    *write_number(char *dict_file);
int				if_higher_str(char *str, char *max_num);
char			*make_copy_without_zeros(char *str);
int				count_valid_numbers(char *str);
int				if_all_nums(char *str, int i);
int				check_num(char *str);
int				first_i(char *str);
unsigned int	ft_atoi(char *str);
void			ft_putstr(char *str);
int				ft_recursive_power(int nb, int power);
int				ft_strcmp(char *s1, char *s2);
int				ft_strlen(char *str);
void			ft_rev_int_tab(char *num_arg);
int				decompose_num_arg(char *num_arg, t_ndit *s_n);
void			s_in_dict(t_dit *d_entry,
					unsigned int n_to_search, unsigned int l_fd);
int left_position(t_dit * dict_entry, unsigned int l_fd,
		 t_ndit * s_n, int a_pos);
void	ntol(t_dit *d_entry, unsigned int l_fd, t_ndit *s_n, unsigned int s_nl);

#endif
