/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpenas-u <dpenas-u@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/12 09:45:25 by dpenas-u          #+#    #+#             */
/*   Updated: 2021/08/12 09:45:29 by dpenas-u         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	write_comb(int a, int b, int c, int d);

void	ft_print_comb2(void)
{
	char	n[4];

	n[0] = 48;
	while (n[0] < 58)
	{
		n[1] = 48;
		while (n[1] < 58)
		{
			n[2] = 48;
			while (n[2] < 58)
			{
				n[3] = 48;
				while (n[3] < 58)
				{
					write_comb(n[0], n[1], n[2], n[3]);
					n[3]++;
				}
				n[2]++;
			}
			n[1]++;
		}
		n[0]++;
	}
}

void	write_comb(int a, int b, int c, int d)
{
	if ((a * 10 + b) < (c * 10 + d))
	{	
		write(1, &a, 1);
		write(1, &b, 1);
		write(1, " ", 1);
		write(1, &c, 1);
		write(1, &d, 1);
		if ((a * 10 + b + c * 10 + d) < 1253)
			write(1, ", ", 2);
	}
}
