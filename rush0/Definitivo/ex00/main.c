/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fmontane <fmontane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/07 09:47:13 by fmontane          #+#    #+#             */
/*   Updated: 2021/08/08 14:13:07 by dpenas-u         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	rush00(int n_columns, int n_rows);
void	rush01(int n_columns, int n_rows);
void	rush02(int n_columns, int n_rows);
void	rush03(int n_columns, int n_rows);
void	rush04(int n_columns, int n_rows);
void	rush_select(int n_columns, int n_rows, int n_rush);
void	ft_putstr(char *str);
int		false_atoi(char *str);

//	Introducir numero de rush seguido del número de columnas
//	y el número de filas.
//	Ejemplo: s>a.out 3 5 4 = Rush03, 5 columnas, 4 filas.
int	main(int	argc, char *argv[])
{
	int	n_columns;
	int	n_rows;
	int	n_rush;

	if (argc == 4)
	{
		n_columns = false_atoi(argv[2]);
		n_rows = false_atoi(argv[3]);
		n_rush = false_atoi(argv[1]);
		if (n_rows != -1 && n_columns != -1)
			rush_select(n_columns, n_rows, n_rush);
		else
		{
			ft_putstr("Escribe parametros validos en orden:");
			ft_putstr("nº Rush, columnas y filas.\n");
		}
	}
	else
	{
		ft_putstr("Escribe parametros validos en orden:");
		ft_putstr("nº Rush, columnas y filas.\n");
	}
	return (0);
}

void	rush_select(int n_columns, int n_rows, int n_rush)
{
	if (n_columns != 0 && n_rows != 0)
	{
		if (n_rush == 0)
			rush00(n_columns, n_rows);
		else if (n_rush == 1)
			rush01(n_columns, n_rows);
		else if (n_rush == 2)
			rush02(n_columns, n_rows);
		else if (n_rush == 3)
			rush03(n_columns, n_rows);
		else if (n_rush == 4)
			rush04(n_columns, n_rows);
		else
		{
			ft_putstr("Escribe parametros validos en orden:");
			ft_putstr("nº Rush, columnas y filas.\n");
		}
	}
	else
	{
		ft_putstr("Escribe parametros validos en orden:");
		ft_putstr("nº Rush, columnas y filas.\n");
	}
}

int	false_atoi(char *str)
{
	int	result;
	int	i;

	i = 0;
	result = 0;
	while (str[i] != '\0')
	{
		if (str[i] < '0' || str[i] > '9')
		{
			return (-1);
		}
		result = result * 10 + str[i] - '0';
		i++;
	}
	return (result);
}
