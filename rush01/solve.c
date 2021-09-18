/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpenas-u <dpenas-u@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 18:26:10 by dpenas-u          #+#    #+#             */
/*   Updated: 2021/08/18 14:27:05 by dpenas-u         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	false_atoi(char *str);
char	*comb_equal(int num_combo);
char	*comb_minus(int izq, int dcha, int num_combo);
char	*comb_max(int izq, int dcha, int num_combo);
int	n_comb(int izq, int dcha);
void	counter_for_comb(char	l[4]);
int	check_comb(char *str, int i, char n[6][6]);
void	insert_comb(char n[6][6], char comb[4], int i);
void	print_table(char n[6][6]);

void	solve(char	n[6][6], char l[4])
{
	int	i;
	char	*ch;
	int	s;
	int	c;
	char	comb[4];
	int	contador_cutre;
	int		bucle;

	bucle = 0;
	s = -1;
	i = 1;
	contador_cutre = 0;
	while ( i > 0 && i < 5)
	{
		bucle++;
		contador_cutre++;
		if (n[i][0] == n[i][5])
		{
			c = false_atoi(&l[i - 1]);
			while (c <= n_comb(n[i][0], n[i][5]))
			{
				ch = comb_equal(c);
				while (++s < 4)
				{
					comb[s] = ch[s];
				} 
				s = -1;
				if (comb[0] == 48)
				{
					l[i - 2]++;
					l[i - 1] = 49;
					i = i - 2;
					break;
				}
				if (check_comb(comb, i, n) == 1)
				{
					insert_comb(n, comb, i);
					l[i - 1] = c + 49;
					break;
				}
				c++;
			}
		}
		else if (n[i][0] < n[i][5])
		{
			c = false_atoi(&l[i - 1]);
			while (c <= n_comb(n[i][0], n[i][5]))
			{
				ch = comb_minus(false_atoi(&n[i][0]), false_atoi(&n[i][5]), c);
				while (++s < 4)
				{
					comb[s] = ch[s];
				}
				s = -1;
				if (comb[0] == 48)
				{
					l[i - 2]++;
					l[i - 1] = 49;
					i = i - 2;
					break;
				}
				if (check_comb(comb, i, n) == 1)
				{
					insert_comb(n, comb, i);
					l[i - 1] = c + 49;
					break;
				}
				c++;
			}
		}
		else if (n[i][0] > n[i][5])
		{
			c = false_atoi(&l[i - 1]);
			while (c <= n_comb(n[i][0], n[i][5]))
			{

				ch = comb_max(false_atoi(&n[i][0]), false_atoi(&n[i][5]), c);
				while (++s < 4)
				{
					comb[s] = ch[s];
				}
				comb[s] = '\0';
				s = -1;
				if (comb[0] == 48)
				{
					l[i - 2]++;
					l[i - 1] = 49;
					i = i - 2;
					break;
				}
				if (check_comb(comb, i, n) == 1)
				{
					insert_comb(n, comb, i);
					l[i - 1] = c + 49;
					break;
				}
				c++;
			}
		}
		i++;
	}
}
