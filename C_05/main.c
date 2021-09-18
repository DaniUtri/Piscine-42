#include <stdio.h>
#include <limits.h>
#include "ex00/ft_iterative_factorial.c"
#include "ex01/ft_recursive_factorial.c"
#include "ex02/ft_iterative_power.c"
#include "ex03/ft_recursive_power.c"
#include "ex04/ft_fibonacci.c"
#include "ex05/ft_sqrt.c"
#include "ex06/ft_is_prime.c"
#include "ex07/ft_find_next_prime.c"

int	main(void)
{
	printf("\n*********\n");
	printf("ex00: ft_iterative_factorial");
	printf("\n*********\n");

	printf("\n=========\n");
	printf("Prueba 1");
	printf("\n=========\n");

	printf("\nDevuelve el factorial de 5 (120): %i\n", ft_iterative_factorial(5));
	printf("\nDevuelve el factorial de -3 (0): %i\n", ft_iterative_factorial(-3));
	printf("\nDevuelve el factorial de 0 (1): %i\n", ft_iterative_factorial(0));
	printf("\nDevuelve el factorial de %i (479001600): %i\n", 12, ft_iterative_factorial(12));
	printf("\nDevuelve el factorial de %i (COMPORTAMIENTO EXTRAÑO): %i\n", 13, ft_iterative_factorial(13));

	printf("\n*********\n");
	printf("ex01: ft_recursive_factorial");
	printf("\n*********\n");

	printf("\n=========\n");
	printf("Prueba 1");
	printf("\n=========\n");

	printf("\nDevuelve el factorial de 5 (120): %i\n", ft_recursive_factorial(5));
	printf("\nDevuelve el factorial de -3 (0): %i\n", ft_recursive_factorial(-3));
	printf("\nDevuelve el factorial de 0 (1): %i\n", ft_recursive_factorial(0));
	printf("\nDevuelve el factorial de %i (479001600): %i\n", 12, ft_recursive_factorial(12));
	printf("\nDevuelve el factorial de %i (COMPORTAMIENTO EXTRAÑO): %i\n", 13, ft_iterative_factorial(13));

	printf("\n*********\n");
	printf("ex02: ft_iterative_power");
	printf("\n*********\n");

	printf("\n=========\n");
	printf("Prueba 1");
	printf("\n=========\n");

	printf("\nDevuelve la potencia 3 de 4 (256): %i\n", ft_iterative_power(4, 4));
	printf("\nDevuelve la potencia 3 de 5 (125): %i\n", ft_iterative_power(5, 3));
	printf("\nDevuelve la potencia 3 de -5 (-125): %i\n", ft_iterative_power(-5, 3));
	printf("\nDevuelve la potencia 1 de 4 (4): %i\n", ft_iterative_power(4, 1));
	printf("\nDevuelve la potencia 0 de 4 (0): %i\n", ft_iterative_power(4, 0));
	printf("\nDevuelve la potencia -56 de 4: %i\n", ft_iterative_power(4, -56));
	printf("\nDevuelve la potencia 8 de 2 (256): %i\n", ft_iterative_power(2, 8));

	printf("\n*********\n");
	printf("ex03: ft_recursive_power");
	printf("\n*********\n");

	printf("\n=========\n");
	printf("Prueba 1");
	printf("\n=========\n");

	printf("\nDevuelve la potencia 3 de 4 (256): %i\n", ft_recursive_power(4, 4));
	printf("\nDevuelve la potencia 3 de 5 (125): %i\n", ft_recursive_power(5, 3));
	printf("\nDevuelve la potencia 3 de -5 (-125): %i\n", ft_recursive_power(-5, 3));
	printf("\nDevuelve la potencia 1 de 4 (4): %i\n", ft_recursive_power(4, 1));
	printf("\nDevuelve la potencia 0 de 4 (1): %i\n", ft_recursive_power(4, 0));
	printf("\nDevuelve la potencia -56 de 4 (0): %i\n", ft_recursive_power(4, -56));
	printf("\nDevuelve la potencia 8 de 2 (256): %i\n", ft_recursive_power(2, 8));

	printf("\n*********\n");
	printf("ex04: ft_recursive_power");
	printf("\n*********\n");

	printf("\n=========\n");
	printf("Prueba 1");
	printf("\n=========\n");

	printf("\nSucesion de Fibonacci: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233,...\n");

	printf("\nDevuelve el índice 2 de la sucesión de fibonacci: %i\n", ft_fibonacci(2));
	printf("\nDevuelve el índice 3 de la sucesión de fibonacci: %i\n", ft_fibonacci(3));
	printf("\nDevuelve el índice 5 de la sucesión de fibonacci: %i\n", ft_fibonacci(5));
	printf("\nDevuelve el índice 8 de la sucesión de fibonacci: %i\n", ft_fibonacci(8));
	printf("\nDevuelve el índice 11 de la sucesión de fibonacci: %i\n", ft_fibonacci(11));
	printf("\nDevuelve el índice 13 de la sucesión de fibonacci: %i\n", ft_fibonacci(13));


	printf("\n*********\n");
	printf("ex05: ft_sqrt");
	printf("\n*********\n");

	printf("\n=========\n");
	printf("Prueba 1");
	printf("\n=========\n");

	printf("\nDevuelve la raiz cuadrada de 6561 (81): %i\n", ft_sqrt(6561));
	printf("\nDevuelve la raiz cuadrada de 0 (0): %i\n", ft_sqrt(0));
	printf("\nDevuelve la raiz cuadrada de 1 (1): %i\n", ft_sqrt(1));
	printf("\nDevuelve la raiz cuadrada de 2 (No entera): %i\n", ft_sqrt(2));
	printf("\nDevuelve la raiz cuadrada de -25 (Negativa): %i\n", ft_sqrt(-25));
	printf("\nDevuelve la raiz cuadrada de 81 (9): %i\n", ft_sqrt(81));
	printf("\nDevuelve la raiz cuadrada de 214769025 (14655): %i\n", ft_sqrt(214769025));
	printf("\nDevuelve la raiz cuadrada de %i (0): %i\n", INT_MAX - 7, ft_sqrt(INT_MAX - 7));
	printf("\nDevuelve la raiz cuadrada de %i (0): %i\n", INT_MAX - 5, ft_sqrt(INT_MAX - 5));
	printf("\nDevuelve la raiz cuadrada de %i (0): %i\n", INT_MAX - 6, ft_sqrt(INT_MAX - 6));
	printf("\nDevuelve la raiz cuadrada de %i (0): %i\n", INT_MAX - 2, ft_sqrt(INT_MAX - 2));
	printf("\nDevuelve la raiz cuadrada de %i (0): %i\n", INT_MAX, ft_sqrt(INT_MAX));

	printf("\nTRAZA MOLINETTE\n");	
	printf("\nCalcula la raiz cuadrada de los siguientes números:\n");
	printf("\nRaiz cuadradada de 1 es (1): %i\n", ft_sqrt(1));
	printf("\nRaiz cuadradada de 2  es (0): %i\n", ft_sqrt(2));
	printf("\nRaiz cuadradada de 1640045925 es (0): %i\n", ft_sqrt(1640045925));
	printf("\nRaiz cuadradada de 2147395600 es (46340): %i\n", ft_sqrt(2147395600));
	printf("\nRaiz cuadradada de 2147483646 es (0): %i\n", ft_sqrt(2147483646));
	printf("\nRaiz cuadradada de 1869870564 es (43242): %i\n", ft_sqrt(1869870564));
	printf("\nRaiz cuadradada de 530703280 es (0): %i\n", ft_sqrt(530703280));


	printf("\n*********\n");
	printf("ex06: ft_is_prime");
	printf("\n*********\n");

	printf("\n=========\n");
	printf("Prueba 1");
	printf("\n=========\n");

	printf("\n¿Es primo el 17? (1): %i\n", ft_is_prime(17));
	printf("\n¿Es primo el 49? (0): %i\n", ft_is_prime(49));
	printf("\n¿Es primo el 77? (0): %i\n", ft_is_prime(77));
	printf("\n¿Es primo el 7? (1): %i\n", ft_is_prime(7));
	printf("\n¿Es primo el 1000000 ? (0): %i\n", ft_is_prime(1000000));
	printf("\n¿Es primo el 23? (1): %i\n", ft_is_prime(23));
	printf("\n¿Es primo el 379? (1): %i\n", ft_is_prime(379));
	printf("\n¿Es primo el 14? (0): %i\n", ft_is_prime(14));
	printf("\n¿Es primo el 81? (0): %i\n", ft_is_prime(81));
	printf("\n¿Es primo el 999983? (1): %i\n", ft_is_prime(999983));
	printf("\n¿Es primo el 99999971? (1): %i\n", ft_is_prime(99999971));
	printf("\n¿Es primo el 97? (1): %i\n", ft_is_prime(97));
	printf("\n¿Es primo el %i? (1): %i\n", INT_MAX - 18, ft_is_prime(INT_MAX - 18));
	printf("\n¿Es primo el %i? (0): %i\n", INT_MAX - 12, ft_is_prime(INT_MAX - 12));
	printf("\n¿Es primo el %i? (0): %i\n", INT_MAX - 6, ft_is_prime(INT_MAX - 6));
	printf("\n¿Es primo el %i? (0): %i\n", INT_MAX - 4, ft_is_prime(INT_MAX - 4));
	printf("\n¿Es primo el %i? (1): %i\n", INT_MAX, ft_is_prime(INT_MAX));
	
	printf("\n*********\n");
	printf("ex07: ft_find_next_prime");
	printf("\n*********\n");

	printf("\n=========\n");
	printf("Prueba 1");
	printf("\n=========\n");

	printf("\nEncuentra el siguiente primo de 90 (97): %i\n", ft_find_next_prime(90));
	printf("\nEncuentra el siguiente primo de -90 (2): %i\n", ft_find_next_prime(-90));
	printf("\nEncuentra el siguiente primo de 73 (73): %i\n", ft_find_next_prime(73));
	printf("\nEncuentra el siguiente primo de 48 (53): %i\n", ft_find_next_prime(48));
	printf("\nEncuentra el siguiente primo de 43692 (43711): %i\n", ft_find_next_prime(43692));
	printf("\nEncuentra el siguiente primo de %i (%i): %i\n", INT_MAX - 19, INT_MAX - 18, ft_find_next_prime(INT_MAX - 19));
	printf("\nEncuentra el siguiente primo de %i (%i): %i\n", INT_MAX, INT_MAX, ft_find_next_prime(INT_MAX));
	printf("\nEncuentra el siguiente primo de %i (%i): %i\n", INT_MAX - 2, INT_MAX, ft_find_next_prime(INT_MAX - 2));
	printf("\nEncuentra el siguiente primo de %i (%i): %i\n", INT_MAX - 6, INT_MAX, ft_find_next_prime(INT_MAX - 6));







}
