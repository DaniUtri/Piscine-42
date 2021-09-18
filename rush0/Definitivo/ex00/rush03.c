/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmontane <fmontane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/07 10:11:17 by fmontane          #+#    #+#             */
/*   Updated: 2021/08/07 13:34:34 by dpenas-u         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	check_row03(int n_columns, int n_rows, int i);

void	rush03(int n_columns, int n_rows)
{
	int	i;

	i = 1;
	while (i <= n_rows)
	{
		check_row03(n_columns, n_rows, i);
		ft_putchar('\n');
		i++;
	}
}

void	check_row03(int n_columns, int n_rows, int i)
{
	int	j;

	j = 1;
	while (j <= n_columns)
	{
		if (i == 1 || i == n_rows)
		{
			if (j == 1)
				ft_putchar('A');
			else if (j == n_columns)
				ft_putchar('C');
			else
				ft_putchar('B');
		}
		else if (j == 1 || j == n_columns)
			ft_putchar('B');
		else
			ft_putchar(' ');
		j++;
	}
}
