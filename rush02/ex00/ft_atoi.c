
#include "proto.h"

unsigned int	ft_atoi(char *str)
{
	unsigned int	i;
	unsigned int	num;
	
	i = first_i(str);
	num = 0;
	if (str[i] == 43 || str[i] == 45)
		i++;
	while (str[i])
	{
		if (str[i] > 47 && str[i] < 58)
			num = num * 10 + str[i] - 48;
		else
			break ;
		i++;
	}
	if (str[first_i(str)] == 45)
		return (-num);
	return (num);
}

int	first_i(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!(str[i] == 32 || (str[i] > 8 && str[i] < 14)))
			break ;
		i++;
	}
	return (i);
}
