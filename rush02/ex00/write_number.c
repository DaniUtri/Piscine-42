/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   write_number.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpenas-u <dpenas-u@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/22 22:49:56 by dpenas-u          #+#    #+#             */
/*   Updated: 2021/08/25 13:19:13 by dpenas-u         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "proto.h"

t_dit	wri_dic_ent(unsigned int	num, char	*a)
{
	t_dit	dict_entry;

	dict_entry.num_n = num;
	dict_entry.num_a = a;
	return (dict_entry);
}

t_dit	*write_number(char *dict_file)
{
	unsigned int		l_fd;
	char				**dict;
	unsigned int		i;
	t_dit				*dict_entry;

	l_fd = count_lines(dict_file);
	dict = malloc(sizeof(char **) * l_fd);
	fill_memory(dict, dict_file);
	fill_with_lines(dict, dict_file, l_fd);
	dict_entry = malloc(sizeof(t_dit) * l_fd);
	i = 0;
	while (i < l_fd)
	{
		if (iso_key(dict, i) == -1)
			dict_entry[i].num_n = 89;
		else
			dict_entry[i] = wri_dic_ent(iso_key(dict, i), iso_val(dict, i));
		free(dict[i]);
		i++;
	}
	free(dict);
	i = 0;
	return (dict_entry);
}

int	iso_key(char **dict, int i)
{
	int					j;
	unsigned int		key;

	j = 0;
	key = 0;
	while (dict[i][j])
	{
		if (j > 10)
			return (-1);
		if (dict[i][j] == 32 || dict[i][j] == 58)
			break ;
		key = key * 10 + dict[i][j] - 48;
		j++;
	}
	return (key);
}

char	*iso_val(char **dict, int i)
{
	int		j;
	int		j_;
	char	*val;
	int		memory;

	j = 0;
	while (dict[i][j])
	{
		if (dict[i][j] == 32 || dict[i][j] == 58)
			break ;
		j++;
	}
	while (dict[i][j])
	{
		if (dict[i][j] == 32 || dict[i][j] == 58)
			j++;
		else
			break ;
	}
	j_ = j;
	memory = 0;
	while (dict[i][j])
	{
		memory++;
		j++;
	}
	j = 0;
	val = malloc(sizeof(char *) * (memory + 1));
	while (dict[i][j_])
	{
		val[j] = dict[i][j_];
		j++;
		j_++;
	}
	val[j] = '\0';
	return (val);
}

void	fill_with_lines(char **dict, char *dict_file, unsigned int l_fd)
{
	int					fd;
	char				buf;
	unsigned int		i;
	int					j;

	fd = open(dict_file, O_RDONLY);
	i = 0;
	j = 0;
	while (read(fd, &buf, 1) == 1)
	{
		if (buf == 10)
		{
			dict[i][j] = '\0';
			j = 0;
			i++;
		}
		if (i != l_fd && buf != 10)
		{
			dict[i][j] = buf;
			j++;
		}
	}
	close(fd);
}

void	fill_memory(char **dict, char *dict_file)
{
	int		n_char;
	int		index;
	char	buf;
	int		fd;

	n_char = 0;
	index = 0;
	fd = open(dict_file, O_RDONLY);
	while (read(fd, &buf, 1) == 1)
	{
		if (buf != 10)
			n_char++;
		else
		{
			dict[index] = malloc(sizeof(char *) * n_char + 1);
			n_char = 0;
			index++;
		}
	}
	close(fd);
}

int	count_lines(char *dict_file)
{
	char				buf;
	unsigned int		l_fd;
	int					fd;

	l_fd = 0;
	fd = open(dict_file, O_RDONLY);
	while (read(fd, &buf, 1))
	{
		if (buf == 10)
			l_fd++;
	}
	close(fd);
	return (l_fd);
}
