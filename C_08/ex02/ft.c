#include "ft_abs.h"
#include <stdio.h>
int	ft_atoi2(char *str)
{
	int	i;
	int	n;
	int	is_negative;

	is_negative = 0;
	i = -1;
	if (str[0] == 45)
	{
		i++;
		is_negative = 1;
	}
	else if (str[0] == 43)
		i++;
	n = 0;
	while (str[++i])
	{
		if (!(str[i] > 47 && str[i] < 58))
			break; 
		n = n * 10 + str[i] - 48;	
	}
	if (is_negative)
		return (-n);
	return (n);
}

int	main(int argc, char *argv[])
{
	if (argc == 2)
	{
		printf("\nn: %i\n", ABS(ft_atoi2(argv[1])));
	}
	return (0);
}
