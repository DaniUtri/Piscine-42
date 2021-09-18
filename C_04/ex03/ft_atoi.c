/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpenas-u <dpenas-u@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 08:40:14 by dpenas-u          #+#    #+#             */
/*   Updated: 2021/08/19 14:11:25 by dpenas-u         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	compute_neg(char *str);
int	first_numbr(char *str);

int	ft_atoi(char *str)
{
	int	i;
	int	n_negative;
	int	number;

	number = 0;
	n_negative = compute_neg(str);
	i = first_numbr(str);
	while (str[i])
	{
		if (str[i] > 47 && str[i] < 58)
			number = number * 10 + (str[i] - 48);
		else
			break ;
		i++;
	}
	if (n_negative % 2 != 0)
		return (-number);
	return (number);
}

int	first_numbr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == 32 || (str[i] > 8 && str[i] < 14))
			i++;
		else
			break ;
	}
	while (str[i])
	{
		if (str[i] == 43 || str[i] == 45)
			i++;
		else
			return (i);
	}
	return (i);
}

int	compute_neg(char *str)
{
	int	i;
	int	n_neg;

	i = 0;
	n_neg = 0;
	while (str[i])
	{
		if (str[i] == 32 || (str[i] > 8 && str[i] < 14))
			i++;
		else
			break ;
	}
	while (str[i])
	{
		if (str[i] == 45)
			n_neg++;
		else if (str[i] != 43)
			return (n_neg);
		i++;
	}
	return (n_neg);
}
