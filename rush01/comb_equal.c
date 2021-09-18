/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   comb_equal.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpenas-u <dpenas-u@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 18:13:52 by dpenas-u          #+#    #+#             */
/*   Updated: 2021/08/17 13:23:06 by dpenas-u         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*comb_equal(int num_combo)
{
	char	*comb;

	comb = "0000";
	if (num_combo == 1)
		comb = "3412";
	else if (num_combo == 2)
		comb = "1423";
	else if (num_combo == 3)
		comb = "2413";
	else if (num_combo == 4)
		comb = "2143";
	else if (num_combo == 5)
		comb = "3142";
	else if (num_combo == 6)
		comb = "3241";
	return (comb);
}
