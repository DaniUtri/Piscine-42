/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpenas-u <dpenas-u@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/17 10:40:54 by dpenas-u          #+#    #+#             */
/*   Updated: 2021/08/19 14:16:25 by dpenas-u         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int		ft_strlen_4(char *str);
int		check_base(char *str);

void	ft_putnbr_base(int nbr, char *base)
{
	int		l_base;
	char	c;

	l_base = ft_strlen_4(base);
	if (check_base(base) == 1)
	{
		if (nbr < 0)
		{
			write(1, "-", 1);
			if (nbr / l_base != 0)
				ft_putnbr_base(((unsigned int)nbr * -1) / l_base, base);
			c = base[((unsigned int)nbr * -1) % l_base];
		}
		else
		{
			if (nbr / l_base > 0)
				ft_putnbr_base((unsigned int)nbr / l_base, base);
			c = base[nbr % l_base];
		}
		write(1, &c, 1);
	}
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

int	ft_strlen_4(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}
