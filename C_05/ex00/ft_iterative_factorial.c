/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpenas-u <dpenas-u@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/18 11:49:23 by dpenas-u          #+#    #+#             */
/*   Updated: 2021/08/19 15:25:31 by dpenas-u         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	factorial;

	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	i = 1;
	factorial = nb;
	while (i < nb)
	{
		factorial *= (nb - i);
		i++;
	}
	return (factorial);
}
