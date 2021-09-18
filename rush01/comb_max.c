/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   comb_max.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpenas-u <dpenas-u@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 18:15:55 by dpenas-u          #+#    #+#             */
/*   Updated: 2021/08/15 18:15:57 by dpenas-u         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*comb_max(int izq, int dcha, int num_combo)
{
	char	*comb;

	comb = "0000";
	if (izq == 4 && dcha == 1)
		comb = "1234";
	else if (izq == 3 && dcha == 1 && num_combo == 1)
		comb = "2134";
	else if (izq == 3 && dcha == 1 && num_combo == 2)
		comb = "1324";
	else if (izq == 3 && dcha == 1 && num_combo == 3)
		comb = "3214";
	else if (izq == 2 && dcha == 1 && num_combo == 1)
		comb = "3214";
	else if (izq == 2 && dcha == 1 && num_combo == 2)
		comb = "3124";
	else if (izq == 3 && dcha == 2 && num_combo == 1)
		comb = "2341";
	else if (izq == 3 && dcha == 2 && num_combo == 2)
		comb = "1243";
	else if (izq == 3 && dcha == 2 && num_combo == 3)
		comb = "1342";
	return (comb);
}
