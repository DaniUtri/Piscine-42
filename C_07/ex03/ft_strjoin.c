#include <stdlib.h>

int		len_strs(int size, char **strs);
void	fill_join_str(char *join_str, char **strs, char *sep, int l_str);
int		fill_with_sep(char *join_str, char *sep, int l_str);

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*join_str;
	int		l_sep;
	int		n_char;
	int		l_str;

	join_str = 0;
	if (size == 0)
		return (join_str);
	n_char = len_strs(size, strs);
	l_sep = 0;
	while (sep[l_sep])
		l_sep++;
	l_str = n_char + l_sep * (size - 1) + 1;
	join_str = malloc(sizeof(char *) * l_str);
	join_str[l_str] = 0;
	fill_join_str(join_str, strs, sep, l_str - 1);	
	return (join_str);
}

void	fill_join_str(char *join_str, char **strs, char *sep, int l_str)
{
	int	i;
	int	c;
	int	j;

	i = 0;
	c = 0;
	while (c < l_str)
	{
		j = 0;
		while (strs[i][j])
		{
			join_str[c] = strs[i][j];
			j++;
			c++;
		}
		if (c == l_str)
		{
			join_str[c] = '\0';
			continue ;
		}
		c = fill_with_sep(join_str, sep, c);
		i++;
	}
}

int	fill_with_sep(char *join_str, char *sep, int l_str)
{
	int	k;

	k = 0;
	while (sep[k])
	{
		join_str[l_str] = sep[k];
		k++;
		l_str++;
	}
	return (l_str);
}

int	len_strs(int size, char **strs)
{
	int	i;
	int	j;
	int	n_char;

	i = 0;
	n_char = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j])
		{
			n_char++;
			j++;
		}
		i++;
	}
	return (n_char);
}
