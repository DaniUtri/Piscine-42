/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpenas-u <dpenas-u@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/19 13:48:59 by dpenas-u          #+#    #+#             */
/*   Updated: 2021/08/19 18:30:24 by dpenas-u         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_len(char *str);
int		ft_strcmp(char *s1, char *s2);
void	ft_sort_argv(int argc, char *argv[]);

int	main(int argc, char **argv)
{
	int	i;

	ft_sort_argv(argc, argv);
	i = 0;
	while (++i < argc)
	{
		write(1, argv[i], ft_len(argv[i]));
		write(1, "\n", 1);
	}
}

void	ft_sort_argv(int argc, char *argv[])
{
	int		i;
	int		j;
	char	*swap;

	i = 1;
	while (i < argc - 1)
	{
		j = 1;
		while (j < argc - 1)
		{
			if (ft_strcmp(argv[j], argv[j + 1]) > 0)
			{
				swap = argv[j];
				argv[j] = argv[j + 1];
				argv[j + 1] = swap;
			}
			j++;
		}
		i++;
	}
}

int	ft_len(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;
	int	n_max;
	int	d;
	int	l_s1;
	int	l_s2;

	l_s1 = ft_len(s1);
	l_s2 = ft_len(s2);
	d = 0;
	i = 0;
	if (l_s1 > l_s2)
		n_max = l_s1;
	else
		n_max = l_s2;
	while (i < n_max)
	{
		if (s1[i] != s2[i])
		{
			d = d + (s1[i] - s2[i]);
			return (d);
		}
		i++;
	}
	return (d);
}
