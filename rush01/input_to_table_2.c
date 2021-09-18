/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input_to_table_2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpenas-u <dpenas-u@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 18:02:16 by dpenas-u          #+#    #+#             */
/*   Updated: 2021/08/17 13:08:18 by dpenas-u         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	false_atoi(char *str);

void	input_to_table_2(char *str, char n[6][6])
{
	int	i;
	int	c;

	i = 0;
	while (str[i])
	{
		if (c > 3)
			c = 0;
		if (str[i] != 32 && i < 8)
		{
			c++;
			n[0][c] = false_atoi(&str[i]) + 48;
		}
		else if (str[i] != 32 && i > 7 && i < 16)
		{
			c++;
			n[5][c] = false_atoi(&str[i]) + 48;
		}
		else if (str[i] != 32 && i > 15 && i < 24)
		{
			c++;
			n[c][0] = false_atoi(&str[i]) + 48;
		}
		else if (str[i] != 32 && i > 23 && i < 32)
		{
			c++;
			n[c][5] = false_atoi(&str[i]) + 48;
		}
		i++;
	}
}
