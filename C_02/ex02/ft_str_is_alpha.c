/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpenas-u <dpenas-u@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/10 13:18:58 by dpenas-u          #+#    #+#             */
/*   Updated: 2021/08/11 12:51:39 by dpenas-u         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	index;

	index = 0;
	while (str[index] != '\0')
	{
		if (str[index] < 64)
			return (0);
		else
		{
			if (str[index] > 91)
			{
				if (str[index] < 96)
				{	
					return (0);
				}
				else
					if (str[index] > 123)
						return (0);
			}
		}
		index++;
	}
	return (1);
}
