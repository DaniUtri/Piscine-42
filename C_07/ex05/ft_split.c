/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pruebas.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpenas-u <dpenas-u@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/24 09:06:59 by dpenas-u          #+#    #+#             */
/*   Updated: 2021/08/26 17:20:56 by dpenas-u         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_compt_splt(char *str, char *sep);
int		ft_cins(char c, char *str);
void	fill_array_memory(char *str, char *sep, char **array);
void	fill_array_char(char *str, char *sep, char **array);

char	**ft_split(char *str, char *charset)
{
	char	**array;
	int		i;

	array = malloc(sizeof(char **) * (ft_compt_splt(str, charset) + 1));
	fill_array_memory(str, charset, array);
	fill_array_char(str, charset, array);
	return (array);
}

void	fill_array_char(char *str, char *sep, char **array)
{
	int	i;
	int	j;
	int	b;
	int	n;

	i = -1;
	j = 0;
	b = 0;
	n = 0;
	while (str[++i])
	{
		if (!(ft_cins(str[i], sep)))
		{
			b = 1;
			array[n][j] = str[i];
			j++;
		}
		if ((ft_cins(str[i], sep) || str[i + 1] == '\0') && b)
		{
			array[n][j] = '\0';
			b = 0;
			j = 0;
			n++;
		}
	}
}

void	fill_array_memory(char *str, char *sep, char **array)
{
	int	i;
	int	b;
	int	c;
	int	n;

	i = -1;
	b = 0;
	c = 0;
	n = 0;
	while (str[++i])
	{
		if (!(ft_cins(str[i], sep)))
		{
			b = 1;
			c++;
		}
		if ((ft_cins(str[i], sep) || str[i + 1] == '\0') && b)
		{
			array[n] = malloc(sizeof(char *) * (c + 1));
			c = 0;
			b = 0;
			n++;
		}
	}
	array[n] = 0;
}

int	ft_compt_splt(char *str, char *sep)
{
	int	i;
	int	b;
	int	n_splits;

	n_splits = 0;
	i = -1;
	b = 0;
	while (str[++i])
	{
		if (!(ft_cins(str[i], sep)))
			b = 1;
		if ((ft_cins(str[i], sep) || str[i + 1] == '\0') && b)
		{
			n_splits++;
			b = 0;
		}
	}
	return (n_splits);
}

int	ft_cins(char c, char *str)
{
	int	i;

	i = -1;
	while (str[++i])
	{
		if (str[i] == c)
			return (1);
	}
	return (0);
}
