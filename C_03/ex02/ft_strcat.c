/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpenas-u <dpenas-u@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/12 11:52:53 by dpenas-u          #+#    #+#             */
/*   Updated: 2021/08/16 12:42:28 by dpenas-u         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_len2(char *str);

char	*ft_strcat(char *dest, char *src)
{
	int	l_src;
	int	l_dest;
	int	l_total;
	int	i;

	i = 0;
	l_src = ft_len2(src);
	l_dest = ft_len2(dest);
	l_total = l_src + l_dest;
	while (i < l_total)
	{
		if (i > l_dest - 1)
		{
			dest[i] = src[i - l_dest];
		}
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int	ft_len2(char *str)
{
	int	i;
	int	l;

	i = 0;
	l = 0;
	while (str[i] != '\0')
	{
		l++;
		i++;
	}
	return (l);
}
