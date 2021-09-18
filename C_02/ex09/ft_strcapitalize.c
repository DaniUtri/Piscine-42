/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpenas-u <dpenas-u@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/10 13:23:44 by dpenas-u          #+#    #+#             */
/*   Updated: 2021/08/18 07:54:06 by dpenas-u         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int		ft_l(char *str);
int		ft_u(char *str);
int		ft_n(char *str);
char	*ft_case_(char *str);

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	begin_w;

	i = 0;
	begin_w = 1;
	while (str[i])
	{
		if (ft_l(&str[i]) || ft_u(&str[i]) || ft_n(&str[i]))
		{
			if (begin_w && ft_l(&str[i]))
				ft_case_(&str[i]);
			else if (begin_w != 1 && ft_u(&str[i]))
				ft_case_(&str[i]);
			begin_w = 0;
		}
		else
			begin_w = 1;
		i++;
	}
	return (str);
}

int	ft_l(char *str)
{
	if (str[0] < 97)
		return (0);
	else
	{
		if (str[0] > 122)
			return (0);
	}
	return (1);
}

int	ft_u(char *str)
{
	if (str[0] < 65)
		return (0);
	else
	{
		if (str[0] > 90)
			return (0);
	}
	return (1);
}

int	ft_n(char *str)
{
	if (str[0] < 48)
		return (0);
	else
	{
		if (str[0] > 57)
			return (0);
	}
	return (1);
}

char	*ft_case_(char *str)
{
	if (str[0] > 96 && str[0] < 123)
		str[0] = str[0] - 32;
	else if (str[0] > 64 && str[0] < 91)
		str[0] = str[0] + 32;
	return (str);
}
