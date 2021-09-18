#include <stdio.h>
#include "ex05/ft_sqrt.c"

int	main(void)
{
	printf("\n**********");
	printf("\nex05: ft_sqrt\n");
	printf("*********\n");

	printf("\nCalcula la raiz cuadrada de los siguientes números:\n");
	printf("\nRaiz cuadradada de 1 es (1): %i\n", ft_sqrt(1));
	printf("\nRaiz cuadradada de 2  es (0): %i\n", ft_sqrt(2));
	printf("\nRaiz cuadradada de 1640045925 es (0): %i\n", ft_sqrt(1640045925));
	printf("\nRaiz cuadradada de 2147395600 es (46340): %i\n", ft_sqrt(2147395600));
	printf("\nRaiz cuadradada de 2147483646 es (0): %i\n", ft_sqrt(2147483646));
	printf("\nRaiz cuadradada de 1869870564 es (43242): %i\n", ft_sqrt(1869870564));
	printf("\nRaiz cuadradada de 530703280 es (0): %i\n", ft_sqrt(530703280));
}
