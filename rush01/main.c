/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpenas-u <dpenas-u@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 18:27:42 by dpenas-u          #+#    #+#             */
/*   Updated: 2021/08/18 14:16:29 by dpenas-u         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putstr(char *str);
int	false_atoi(char *str);
void	input_to_table_1(char n[6][6]);
void	input_to_table_2(char *str, char n[6][6]);
void	input_to_table_3(char n[6][6]);
void	s_numbers_rows_1(char	n[6][6]);
void	s_numbers_rows_2(char	n[6][6]);
void	s_numbers_cols_1(char	n[6][6]);
void	s_numbers_cols_2(char	n[6][6]);
void	print_table(char n[6][6]);
char	*comb_equal(int num_combo);
char	*comb_minus(int izq, int dcha, int num_combo);
char	*comb_max(int izq, int dcha, int num_combo);
int	n_comb(int izq, int dcha);
void	counter_for_comb(char	l[4]);
int	check_comb(char *str, int i, char n[6][6]);
void	insert_comb(char n[6][6], char comb[4], int i);
void	solve(char	n[6][6], char l[4]);




int	main(int argc, char *argv[])
{
	char	n[6][6];
	char	l[4];
	//char	*c;
	int		index;
	//c = "4 3 2 1 1 2 2 2 4 3 2 1 1 2 2 2";
	//c = "1 2 3 2 2 1 2 3 1 4 2 2 3 1 2 3";
	//c = "3 3 1 2 1 2 2 3 2 3 2 1 2 1 2 3";
	
	if (argc != 2)
		ft_putstr("Escribe parametros validos.\n");

	input_to_table_1(n);
	
	input_to_table_2(argv[1], n);
	
	input_to_table_3(n);

	s_numbers_rows_1(n);
	s_numbers_rows_2(n);
	s_numbers_cols_1(n);
	s_numbers_cols_2(n);
	
	index = 0;
	while (index < 4)
	{
		l[index] = 49;
		index++;
	} 
	solve(n, l);
	
	print_table(n);
}
