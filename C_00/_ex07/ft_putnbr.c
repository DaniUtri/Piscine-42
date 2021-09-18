#include <unistd.h>
#include <stdio.h>

void	ft_putnbr(int n);

void	ft_putnbr(int n)
{
	char	c;
	int		number;
	int		negative;

	negative = 0;
	number = n;
	if (number > 0)
	{
		ft_putnbr(number / 10);
		c = (number % 10) + 48;
		write(1, &c, 1);
	}
	if (number < 0)
	{
		write(1, "-", 1);
		ft_putnbr(number * -1 / 10);
		c = (number * -1 % 10) + 48;
		write(1, &c, 1);
	}		
}
