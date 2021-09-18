/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpenas-u <dpenas-u@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 08:53:10 by dpenas-u          #+#    #+#             */
/*   Updated: 2021/08/20 14:27:46 by dpenas-u         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	*first_nbr_n_neg(char *str, int *array)

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	array[2];

	first_nbr_n_neg(str, array);
	i = 0;
	return (array);
}

int	*first_nbr_n_neg(char *str, int *array)
{
	int	i;
	int	n_neg;

	i = -1;
	n_neg = 0;
	while (str[++i])
	{
		if (!(str[i] == 32 || (str[i] > 8 && str[i] < 14)))
			break ;
	}
	while (str[++i])
	{
		if (str[i] == 45)
			n_neg++;
		else if (str[i] != 43)
		{
			array[0] = i;
			array[1] = n_neg;
			return (array);
		}
	}
	array[0] = i;
	array[1] = n_neg;
	return (array);
}

int	total_match(char *str, char *to_find, int i, int i_find)
{
	int	match;

	match = 1;
	while (to_find[i_find])
	{
		if (to_find[i_find] != str[i + i_find])
			match = 0;
		i_find++;
	}
	return (match);
}

int	check_base(char *str)
{
	int	i;
	int	i_;
	int	l_str;

	l_str = ft_strlen_4(str);
	if (l_str == 1 || l_str == 0)
		return (0);
	i = 0;
	while (str[i])
	{
		i_ = 0;
		if (str[i] == 43 || str[i] == 45)
			return (0);
		while (str[i_])
		{
			if (str[i] == str[i_] && i != i_)
				return (0);
			i_++;
		}
		i++;
	}
	return (1);
}
