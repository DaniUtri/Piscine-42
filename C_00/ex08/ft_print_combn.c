/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpenas-u <dpenas-u@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/11 09:00:30 by dpenas-u          #+#    #+#             */
/*   Updated: 2021/08/12 09:46:53 by dpenas-u         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_combn(int n);
void	ft_initialize_array(char x[9], int n);
void	ft_increase_array(char x[9], int n);
void	ft_print_nbr(char v[9], int n);

void	ft_print_combn(int n)
{
	char	x[9];

	ft_initialize_array(x, n);
	ft_increase_array(x, n);
	ft_print_nbr(x, n);
}

void	ft_initialize_array(char x[9], int n)
{
	int	j;

	j = 0;
	while (j <= n - 1)
	{
		x[j] = j + '0';
		j++;
	}
}

void	ft_increase_array(char x[9], int n)
{
	int	j;
	int	counter;

	j = 0;
	while (j < n)
	{
		while (x[n - 1 - j] < '9' - j)
		{
			ft_print_nbr(x, n);
			write(1, ", ", 2);
			x[n - 1 - j] = x[n - 1 - j] + 1;
			if (j > 0)
			{
				counter = j;
				while (counter > 0)
				{
					x[n - counter] = x[n - 1 - counter] + 1;
					counter--;
				}
			}
			j = 0;
		}
		j++;
	}
}

void	ft_print_nbr(char v[9], int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		write(1, &v[i], 1);
		i++;
	}
}
