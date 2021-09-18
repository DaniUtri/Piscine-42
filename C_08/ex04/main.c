#include "ft_stock_str.h"
#include "ft_strs_to_tab.c"
#include "../ex05/ft_show_tab.c"

int	main(void)
{
	t_stock_str	*s;
	char **str;
	int	size;

	size = 3;
	str = malloc(sizeof(char **) * (size + 1));
	str[0] = malloc(sizeof(char *) * 5);
	str[0][0] = 'h';
	str[0][1] = 'o';
	str[0][2] = 'l';
	str[0][3] = 'a';
	str[0][4] = '\0';
	str[1] = malloc(sizeof(char *) * 4);
	str[1][0] = 'q';
	str[1][1] = 'u';
	str[1][2] = 'e';
	str[1][3] = '\0';
	str[2] = malloc(sizeof(char *) * 4);
	str[2][0] = 't';
	str[2][1] = 'a';
	str[2][2] = 'l';
	str[2][3] = '\0';
	str[3] = '\0';
	s = ft_strs_to_tab(size, str);
	ft_show_tab(s);
}
