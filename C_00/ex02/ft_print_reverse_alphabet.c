/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpenas-u <dpenas-u@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/12 09:44:38 by dpenas-u          #+#    #+#             */
/*   Updated: 2021/08/12 09:44:40 by dpenas-u         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	int	letter;

	letter = 122;
	while (letter > 96)
	{
		write(1, &letter, 1);
		letter--;
	}
}
