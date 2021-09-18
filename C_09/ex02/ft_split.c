#include <stdlib.h>

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

int	ft_nsplits(char *str, char *charset)
{
	int	i;
	int	n_splits;
	int	split;

	i = -1;
	n_splits = 0;
	split = 0;
	while (str[++i])
	{
		if (!(ft_cins(str[i], charset)))
			split = 1;
		if (split && (ft_cins(str[i], charset) || str[i + 1] == '\0'))
		{
			n_splits++;
			split = 0;
		}
	}
	return (n_splits);
}

void	ft_memtab(char *str, char *charset, char **tab)
{
	int	i;
	int	n_char;
	int	split;
	int	n_split;

	i = -1;
	split = 0;
	n_char = 0;
	n_split = 0;
	while (str[++i])
	{
		if (!(ft_cins(str[i], charset)))
		{
			n_char++;
			split = 1;
		}
		if (split && (ft_cins(str[i], charset) || str[i + 1] == '\0'))
		{
			tab[n_split] = malloc(sizeof(char *) * (n_char + 1));
			n_char = 0;
			split = 0;
			n_split++;
		}
	}
}

void	ft_filltab(char *str, char *charset, char **tab)
{
	int	i;
	int	j;
	int	split;
	int	n_split;

	i = -1;
	split = 0;
	n_split = 0;
	j = -1;
	while (str[++i])
	{
		if (!(ft_cins(str[i], charset)))
		{
			tab[n_split][++j] = str[i];
			split = 1;
		}
		if (split && (ft_cins(str[i], charset) || str[i + 1] == '\0'))
		{
			tab[n_split][++j] = 0;
			split = 0;
			n_split++;
			j = -1;
		}
	}
}

char	**ft_split(char *str, char *charset)
{
	char	**tab;

	tab = malloc(sizeof(char **) * ((ft_nsplits(str, charset) + 1)));
	tab[ft_nsplits(str, charset)] = 0;
	ft_memtab(str, charset, tab);
	ft_filltab(str, charset, tab);
	return (tab);
}
