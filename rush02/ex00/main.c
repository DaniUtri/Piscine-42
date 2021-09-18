/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edgonzal <edgonzal@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/21 08:30:01 by dpenas-u          #+#    #+#             */
/*   Updated: 2021/08/25 13:21:07 by dpenas-u         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "proto.h"

int	main(int argc, char *argv[])
{
	char	*dict_file;
	t_dit	*dict_entry;
	char 	*clean_str;
	t_ndit			split_num[10];
	unsigned int		split_num_length;

	if (argc < 2 || argc > 3)
	{
		ft_putstr("Atención: !Parámetros incorrectos!\n");
		return (0);
	}
	dict_file = "numbers.dict";
	if (argc == 3)
		dict_file = argv[argc - 2];
	if (check_num(argv[argc - 1]) == 0) 
	{
		ft_putstr("Error\n");
		return (0);
	}
	dict_entry = write_number(dict_file);
	clean_str = make_copy_without_zeros(argv[argc - 1]);
	split_num_length = decompose_num_arg(clean_str, split_num);
	ntol(dict_entry, count_lines(dict_file), split_num, split_num_length + 1);
}
