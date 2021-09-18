/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpenas-u <dpenas-u@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/12 09:45:52 by dpenas-u          #+#    #+#             */
/*   Updated: 2021/08/13 11:37:34 by dpenas-u         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	negative(int n);
void	positive(int n);

void	ft_putnbr(int nb)
{
	int		n;

	n = nb;
	if (n == 0)
		write(1, "0", 1);
	else if (n > 0)
		positive(n);
	else
		negative(n);
}

void	negative(int n)
{
	char	c;

	if (n == -2147483648)
		write(1, "-2147483648", 11);
	else
	{
		write(1, "-", 1);
		ft_putnbr(n * -1 / 10);
		c = (n * -1 % 10) + 48;
		write(1, &c, 1);
	}
}

void	positive(int n)
{
	char	c;
	int		b;
	int		m;

	b = 0;
	m = n / 10;
	if (m > 0)
		ft_putnbr(m);
	c = (n % 10) + 48;
	write(1, &c, 1);
}
