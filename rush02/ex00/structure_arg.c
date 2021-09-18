/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   structure_arg.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpenas-u <dpenas-u@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/22 22:50:26 by dpenas-u          #+#    #+#             */
/*   Updated: 2021/08/25 13:44:31 by dpenas-u         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "proto.h"


void	ft_rev_int_tab(char *num_arg)
{
	char	replace_char;
	int		last_char_pos;
	int		index;
	int		size;

	index = 0;
	replace_char = 0;
	size = ft_strlen(num_arg);
	last_char_pos = size - 1;
	while (index < (size / 2))
	{
		replace_char = num_arg[index];
		num_arg[index] = num_arg[last_char_pos];
		num_arg[last_char_pos] = replace_char;
		last_char_pos--;
		index++;
	}
}

int	decompose_num_arg(char *num_arg, t_ndit *s_n)
{
	int				size;
	int				index;
	unsigned int	num_power;
	unsigned int	char_to_num;

	index = 0;
	ft_rev_int_tab(num_arg);
	size = ft_strlen(num_arg);
	while (index < size)
	{
		char_to_num = num_arg[index] - '0';
		num_power = ft_recursive_power(10, index);
		s_n[index].num = char_to_num;
		s_n[index].a_pos = index;
		if (index == 0)
			s_n[index].p_value = num_power * char_to_num;
		else if (index == 1 || index == 4 || index == 7)
			s_n[index].p_value = 10 * char_to_num;
		else if (index == 2 || index == 5 || index == 8)
			s_n[index].p_value = 100;
		else
			s_n[index].p_value = num_power;
		index++;
	}
	return (size);
}

void	s_in_dict(t_dit *d_entry, unsigned int n_to_search, unsigned int l_fd)
{
	unsigned int	i;

	i = 0;
	while (i < l_fd)
	{
		if (n_to_search == d_entry[i].num_n)
		{
			ft_putstr(d_entry[i].num_a);
			ft_putstr(" ");
		}
		i++;
	}
}

int	left_position(t_dit *d_entry, unsigned int l_fd, t_ndit *s_n, int a_pos)
{
	int				counter;

	counter = 0;
	if (s_n[a_pos].num != 0)
	{
		counter++;
		s_in_dict(d_entry, s_n[a_pos].num, l_fd);
		s_in_dict(d_entry, s_n[a_pos].p_value, l_fd);
	}
	return (counter);
}

int	cr_pos(t_dit *d_entry, unsigned int l_fd, t_ndit *s_n, int a_pos)
{
	int				counter;

	counter = 0;
	if (s_n[a_pos].num != 0)
	{
		if (s_n[a_pos].num == 1)
		{
			counter++;
			s_in_dict(d_entry, s_n[a_pos].p_value + s_n[a_pos - 1].num, l_fd);
		}
		else
			s_in_dict(d_entry, s_n[a_pos].p_value, l_fd);
	}
	return (counter);
}

int	right_position(t_dit *d_entry, unsigned int l_fd, t_ndit *s_n, int a_pos)
{
	int	counter;

	counter = 0;
	if (s_n[a_pos].num != 0)
	{
		counter++;
		s_in_dict(d_entry, s_n[a_pos].num, l_fd);
		if (a_pos != 0)
			s_in_dict(d_entry, s_n[a_pos].p_value, l_fd);
	}
	return (counter);
}

void	ntol(t_dit *d_entry, unsigned int l_fd, t_ndit *s_n, unsigned int s_nl)
{
	if (s_nl == 1)
		s_in_dict(d_entry, s_n[0].num, l_fd);
	else
	{
		while (s_nl != 0)
		{
			if (s_nl == 10)
			{
				s_in_dict(d_entry, s_n[s_nl - 1].num, l_fd);
				s_in_dict(d_entry, s_n[s_nl - 1].p_value, l_fd);
			}
			else if (s_nl == 9 || s_nl == 6 || s_nl == 3)
				left_position(d_entry, l_fd, s_n, s_nl - 1);
			else if (s_nl == 8 || s_nl == 5 || s_nl == 2)
			{
				if (cr_pos(d_entry, l_fd, s_n, s_nl - 1) != 0)
				{
					s_in_dict(d_entry, s_n[s_nl - 2].p_value, l_fd);
					s_nl = s_nl - 2;
					continue ;
				}
			}
			else if (s_nl == 7 || s_nl == 4 || s_nl == 1)
				right_position(d_entry, l_fd, s_n, s_nl - 1);
			s_nl--;
		}
	}
}
