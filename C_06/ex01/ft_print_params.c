#include <unistd.h>

int	ft_len(char *str);

int	main(int argc, char *argv[])
{
	int	i;
	int	len;

	i = 1;
	while (i < argc)
	{
		len = ft_len(argv[i]);
		write(1, argv[i], len);
		write(1, "\n", 1);
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
