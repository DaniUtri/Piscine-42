/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpenas-u <dpenas-u@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/13 09:43:00 by dpenas-u          #+#    #+#             */
/*   Updated: 2021/08/16 15:03:45 by dpenas-u         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_len_1(char *str);
int	total_match(char *str, char *to_find, int i, int i_find);

char	*ft_strstr(char *str, char *to_find)
{
	int		i;
	int		i_find;
	int		match;
	char	*char_matched;

	i = 0;
	char_matched = 0;
	if (ft_len_1(to_find) == 0)
		return (str);
	while (str[i])
	{
		if (str[i] == to_find[0])
		{
			i_find = 0;
			match = total_match(str, to_find, i, i_find);
			if (match)
				return (str + i);
		}
		i++;
	}
	return (char_matched);
}

int	ft_len_1(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	total_match(char *str, char *to_find, int i, int i_find)
{
	int	match;

	match = 1;
	while (to_find[i_find])
	{
		if (to_find[i_find] != str[i + i_find])
			match = 0;
		i_find++;
	}
	return (match);
}
