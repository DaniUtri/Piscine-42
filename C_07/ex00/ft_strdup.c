/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpenas-u <dpenas-u@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/20 08:56:45 by dpenas-u          #+#    #+#             */
/*   Updated: 2021/08/26 13:23:50 by dpenas-u         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_len(char *str);

char	*ft_strdup(char *src)
{
	char	*p;
	int		i;

	i = 0;
	p = malloc(sizeof(char) * ft_len(src) + 1);
	while (src[i])
	{
		p[i] = src[i];
		i++;
	}
	p[i] = '\0';
	return (p);
}

int	ft_len(char *src)
{
	int	i;

	i = 0;
	while (src[i])
		i++;
	return (i);
}
