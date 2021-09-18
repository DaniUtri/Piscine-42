/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpenas-u <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/07 12:19:51 by dpenas-u          #+#    #+#             */
/*   Updated: 2021/08/07 13:28:55 by dpenas-u         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	check_row0(int n_columns, int n_rows, int i);

void	rush00(int n_columns, int n_rows)
{
	int	i;

	i = 1;
	while (i <= n_rows)
	{
		check_row0(n_columns, n_rows, i);
		ft_putchar('\n');
		i++;
	}
}

void	check_row0(int n_columns, int n_rows, int i)
{
	int	j;

	j = 1;
	while (j <= n_columns)
	{
		if (i == 1 || i == n_rows)
		{
			if (j == 1 || j == n_columns)
				ft_putchar('o');
			else
				ft_putchar('-');
		}
		else if (j == 1 || j == n_columns)
			ft_putchar('|');
		else
			ft_putchar(' ');
		j++;
	}
}
