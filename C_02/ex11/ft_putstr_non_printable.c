/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpenas-u <dpenas-u@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/16 08:17:08 by dpenas-u          #+#    #+#             */
/*   Updated: 2021/08/18 10:18:12 by dpenas-u         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr_non_printable(char *str)
{
	int		i;
	char	*seq;
	int		m;

	seq = "0123456789abcdef";
	i = 0;
	m = 0;
	while (str[i])
	{
		if (str[i] < 0)
			str[i] = str[i] + 256;
		if ((unsigned char)str[i] < 32 || (unsigned char)str[i] > 126)
		{
			write(1, "\\", 1);
			if ((unsigned char)str[i] < 128)
			{
				write(1, &seq[((unsigned char)str[i] / 16)], 1);
				write(1, &seq[((unsigned char)str[i] % 16)], 1);
			}
			else
			{
				while (str[i] / 16 > 0)
				{
					m = (unsigned char)str[i] % 16;
					write(1, &m, 1);
				}
			}
		}
		else
			write(1, &str[i], 1);
		i++;
	}
}
