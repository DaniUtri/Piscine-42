/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpenas-u <dpenas-u@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 11:17:05 by dpenas-u          #+#    #+#             */
/*   Updated: 2021/08/19 15:48:55 by dpenas-u         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime_(int nb);

int	ft_find_next_prime(int nb)
{
	if (nb > 2147483629)
		return (2147483647);
	if (ft_is_prime_(nb))
		return (nb);
	while (!ft_is_prime_(nb) && nb < 2147483647)
		nb++;
	return (nb);
}

int	ft_is_prime_(int nb)
{
	int	i;

	i = 2;
	if (nb < 0)
		return (0);
	if (nb == 0 || nb == 1)
		return (0);
	while (i * i <= nb)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}
