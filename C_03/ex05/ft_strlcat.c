/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpenas-u <dpenas-u@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/13 08:59:30 by dpenas-u          #+#    #+#             */
/*   Updated: 2021/08/18 10:51:27 by dpenas-u         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_len5(char *str);

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	l_src;
	unsigned int	l_dest;
	unsigned int	i;
	unsigned int	l_return;

	l_dest = ft_len5(dest);
	l_src = ft_len5(src);
	l_return = l_dest + l_src;
	if (size <= l_dest)
		return (size + l_src);
	i = 0;
	while (src[i] && i < (size - l_dest - 1))
	{
		dest[l_dest + i] = src[i];
		i++;
	}
	if (size != 0 || l_dest < size)
		dest[l_dest + i] = '\0';
	return (l_return);
}

int	ft_len5(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}
