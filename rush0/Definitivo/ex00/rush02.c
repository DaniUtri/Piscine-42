/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpenas-u <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/07 12:33:41 by dpenas-u          #+#    #+#             */
/*   Updated: 2021/08/07 13:30:36 by dpenas-u         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	check_columns02(int n_columns, int n_rows, int i);

void	rush02(int n_columns, int n_rows)
{
	int	i;

	i = 1;
	while (i <= n_rows)
	{
		check_columns02(n_columns, n_rows, i);
		ft_putchar('\n');
		i++;
	}
}

void	check_columns02(int n_columns, int n_rows, int i)
{
	int	j;

	j = 1;
	while (j <= n_columns)
	{
		if (j == 1 || j == n_columns)
		{
			if (i == 1)
				ft_putchar('A');
			else if (i == n_rows)
				ft_putchar('C');
			else
				ft_putchar('B');
		}
		else
		{
			if (i == 1 || i == n_rows)
				ft_putchar('B');
			else
				ft_putchar(' ');
		}
		j++;
	}
}
