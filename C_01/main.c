#include <stdio.h>
#include "ex00/ft_ft.c"
#include "ex01/ft_ultimate_ft.c"
#include "ex02/ft_swap.c"
#include "ex03/ft_div_mod.c"
#include "ex04/ft_ultimate_div_mod.c"
#include "ex05/ft_putstr.c"
#include "ex06/ft_strlen.c"
#include "ex07/ft_rev_int_tab.c"
#include "ex08/ft_sort_int_tab.c"

int	main(void)
{
	// ex00
	
	int	a;
	int	*ptr;

	a = 99;
	ptr = &a;
	printf("%i\n", *ptr);
	ft_ft(ptr);
	printf("%i\n", *ptr);
	

	// ex01
	/*
	int	a;
	int	*ptr;
	int	**ptr2;
	int	***ptr3;
	int	****ptr4;
	int	*****ptr5;
	int	******ptr6;
	int	*******ptr7;
	int	********ptr8;
	int	*********ptr9;

	a = 100;
	ptr = &a;
	ptr2 = &ptr;
	ptr3 = &ptr2;
	ptr4 = &ptr3;
	ptr5 = &ptr4;
	ptr6 = &ptr5;
	ptr7 = &ptr6;
	ptr8 = &ptr7;
	ptr9 = &ptr8;
	printf("%i\n", *********ptr9);
	ft_ultimate_ft(ptr9);
	printf("%i\n", *********ptr9);
	*/
	
	// ex02
	/*
	int	a;
	int	b;
	int	*ptr1;
	int	*ptr2;

	a = 42;
	b = 24;
	ptr1 = &a;
	ptr2 = &b;
	printf("a: %i\n", a);
	printf("b: %i\n", b);
	ft_swap(ptr1, ptr2);
	printf("a: %i\n", a);
	printf("b: %i\n", b);
	*/

	// ex03
	/*
	int	a;
	int	b;
	int d;
	int	v;
	int	*div;
	int	*mod;

	a = -298;
	b = 10;
	div = &d;
	mod = &v;
	ft_div_mod(a, b, div, mod);
	printf("Resultado: %i, Modulo: %i", *div, *mod);
	*/

	// ex04
	/*
	int	n;
	int	m;
	int	*ptr;
	int	*ptr2;

	n = 259;
	m = 10;
	ptr = &n;
	ptr2 = &m;
	ft_ultimate_div_mod(ptr, ptr2);
	printf("Resutado: %i\n", *ptr);
	printf("Modulo: %i\n", *ptr2);

	*/ 

	// ex05
	/*
	char	*str;

	str = "Hola mundo. Hello World";
	ft_putstr(str);
	*/

	// ex06
	/*
	char	*str;
	int		l;

	str = "Hola que pasa"; //13
	l = ft_strlen(str);
	printf("Longitud: %i", l);
	*/

	//ex07
	/*
	int	i;
	int	tab[7] = {78, 145, 89, 5, 7, 7, 35};
	
	i = 0;
	while (i < 7)
	{
		printf("%i ", *(tab + i));
		i++;
	}
	ft_rev_int_tab(tab, 7);
	i = 0;
	printf("\n");
	while (i < 7)
	{
		printf("%i ", *(tab + i));
		i++;
	}
	*/

	// ex08
	/*
	int	i;
	int	tab[9] = {5, 75, 652, 1, 234, 78, 145, 7, 32};
	
	i = 0;
	while (i < 9)
	{
		printf("%i ", *(tab + i));
		i++;
	}
	ft_sort_int_tab(tab, 9);
	i = 0;
	printf("\n");
	while (i < 9)
	{
		printf("%i ", *(tab + i));
		i++;
	}
	*/
	 

}
