/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_num.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpenas-u <dpenas-u@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/22 22:52:19 by dpenas-u          #+#    #+#             */
/*   Updated: 2021/08/22 22:52:23 by dpenas-u         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "proto.h"

int	check_num(char *str)
{
	char	*max_num;
	char	*str_cpy;

	max_num = "4294967295";
	if (str[0] == 43 || (str[0] > 47 && str[0] < 58))
	{
		if (if_all_nums(str, 1) == 0)
			return (0);
	}
	else
		return (0);
	str_cpy = make_copy_without_zeros(str);
	if (ft_strlen(str_cpy) > ft_strlen(max_num))
		return (0);
	else if (ft_strlen(str_cpy) == ft_strlen(max_num))
	{
		if (if_higher_str(str_cpy, max_num) == 0)
			return (0);
	}
	return (1);
}

int	if_higher_str(char *str, char *max_num)
{
	int	i;
	int	n_str;
	int	n_max_num;

	i = 1;
	if (ft_strlen(str) == ft_strlen(max_num))
	{
		if (ft_strcmp(&str[0], &max_num[0]) > 0)
			return (0);
		else
		{
			while (str[i])
			{
				n_str = n_str * 10 + str[i] - 48;
				n_max_num = n_max_num * 10 + max_num[i] - 48;
				i++;
			}
			if (n_str > n_max_num)
				return (0);
		}
	}
	return (1);
}

int	count_valid_numbers(char *str)
{
	int	i;
	int	counter;
	int	null_zero;

	i = 0;
	counter = 0;
	null_zero = 1;
	while (str[i])
	{
		if (str[i] > 48 && str[i] < 58)
		{
			null_zero = 0;
			counter++;
		}
		else if (str[i] == 48 && null_zero == 0)
			counter++;
		i++;
	}
	if (counter == 0 && str[i - 1] == 48)
		counter++;
	return (counter);
}

char	*make_copy_without_zeros(char *str)
{
	char	*copy;
	int		i;
	int		j;
	int		null_zero;

	i = -1;
	null_zero = 1;
	copy = malloc(sizeof(char *) * (count_valid_numbers(str) + 1));
	j = 0;
	while (str[++i])
	{
		if (str[i] > 48 && str[i] < 58)
		{
			null_zero = 0;
			copy[j] = str[i];
			j++;
		}
		else if ((str[i] == 48 && null_zero == 0)
			|| (str[i + 1] == '\0' && null_zero == 1))
		{
			copy[j] = str[i];
			j++;
		}
	}
	copy[j] = '\0';
	return (copy);
}

int	if_all_nums(char *str, int i)
{
	while (str[i])
	{
		if (str[i] > 47 && str[i] < 58)
			i++;
		else
			return (0);
	}
	return (1);
}
