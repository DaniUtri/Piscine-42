/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpenas-u <dpenas-u@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/16 16:28:08 by dpenas-u          #+#    #+#             */
/*   Updated: 2021/08/19 14:06:58 by dpenas-u         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	char			c;

	if (nb < 0)
	{
		write(1, "-", 1);
		if (nb / 10 != 0)
			ft_putnbr((unsigned int)nb * -1 / 10);
		c = ((unsigned int)nb * -1 % 10) + 48;
	}
	else
	{
		if (nb / 10 > 0)
			ft_putnbr((unsigned int)nb / 10);
		c = (nb % 10) + 48;
	}
	write(1, &c, 1);
}
