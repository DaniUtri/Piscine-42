/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   comb_minus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpenas-u <dpenas-u@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 18:14:18 by dpenas-u          #+#    #+#             */
/*   Updated: 2021/08/17 14:26:46 by dpenas-u         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*comb_minus(int izq, int dcha, int num_combo)
{
	char	*comb;

	comb = "0000";
	if (izq == 1 && dcha == 2 && num_combo == 1)
		comb = "4123";
	else if (izq == 1 && dcha == 2 && num_combo == 2)
		comb = "4213";
	else if (izq == 1 && dcha == 3 && num_combo == 1)
		comb = "4312";
	else if (izq == 1 && dcha == 3 && num_combo == 2)
		comb = "4231";
	else if (izq == 1 && dcha == 3 && num_combo == 3)
		comb = "4132";
	else if (izq == 1 && dcha == 4)
		comb = "4321";
	else if (izq == 2 && dcha == 3 && num_combo == 1)
		comb = "1432";
	else if (izq == 2 && dcha == 3 && num_combo == 2)
		comb = "3421";
	else if (izq == 2 && dcha == 3 && num_combo == 3)
		comb = "2431";
	return (comb);
}
