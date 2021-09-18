/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmontane <fmontane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/07 12:15:30 by fmontane          #+#    #+#             */
/*   Updated: 2021/08/07 13:23:52 by fmontane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);
void	check_row01(int n_columns, int n_rows, int i);
void	first_row01(int j, int n_columns);
void	last_row01(int j, int n_columns);

void	rush01(int n_columns, int n_rows)
{
	int	i;

	i = 1;
	while (i <= n_rows)
	{
		check_row01(n_columns, n_rows, i);
		ft_putchar('\n');
		i++;
	}
}

void	check_row01(int n_columns, int n_rows, int i)
{
	int	j;

	j = 1;
	while (j <= n_columns)
	{
		if (i == 1)
			first_row01(j, n_columns);
		else if (i == n_rows)
			last_row01(j, n_columns);
		else if (j == 1 || j == n_columns)
			ft_putchar('*');
		else
			ft_putchar(' ');
		j++;
	}
}

void	first_row01(int j, int n_columns)
{
	if (j == 1)
		ft_putchar('/');
	else if (j == n_columns)
		ft_putchar('\\');
	else
		ft_putchar('*');
}

void	last_row01(int j, int n_columns)
{
	if (j == 1)
		ft_putchar('\\');
	else if (j == n_columns)
		ft_putchar('/');
	else
		ft_putchar('*');
}
