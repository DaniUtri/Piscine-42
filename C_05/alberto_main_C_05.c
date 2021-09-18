#include <stdio.h>


#include "ex00/ft_iterative_factorial.c"
#include "ex01/ft_recursive_factorial.c"
#include "ex02/ft_iterative_power.c"
#include "ex03/ft_recursive_power.c"
#include "ex04/ft_fibonacci.c"
#include "ex05/ft_sqrt.c"
#include "ex06/ft_is_prime.c"
#include "ex07/ft_find_next_prime.c"
//#include "p.c"

int ft_iterative_factorial(int nb);
int test_ft_iterative_factorial(int nb);
int ft_recursive_factorial(int nb);
int test_ft_recursive_factorial(int nb);
int ft_iterative_power(int nb, int power);
int test_ft_iterative_power(int nb, int power);
int ft_recursive_power(int nb, int power);
int ft_fibonacci(int index);
int ft_sqrt(int nb);
int ft_is_prime(int nb);
int ft_find_next_prime(int nb);
	
int main(void)
{
//ex00
	printf("\nIterative\n");
	printf("-7 factorial: %i\n", test_ft_iterative_factorial(-7));
	printf("7 factorial: %i\n", test_ft_iterative_factorial(7));
	printf("1 factorial: %i\n", test_ft_iterative_factorial(1));
	printf("0 factorial es %i\n", test_ft_iterative_factorial(0));
//	printf("%i\n", test_ft_iterative_factorial(6));
//	printf("%i\n", test_ft_iterative_factorial(0));

	//ex01	
	printf("\nRecursive\n");
	printf("-7 factorial%i\n", test_ft_recursive_factorial(-7));
	printf("7 factorial: %i\n", test_ft_recursive_factorial(7));
	printf("1 factorial: %i\n", test_ft_recursive_factorial(1));
	printf("0 factorial es %i\n", test_ft_recursive_factorial(0));


//ex02
	printf("\nIterative\n");
	printf("10^3: %i\n", ft_iterative_power(10, 3));
	printf("2^8: %i\n", ft_iterative_power(2, 8));
	printf("2^-8: %i\n", ft_iterative_power(2, -8));
	printf("0^0: %i\n", ft_iterative_power(0, 0));
	printf("10^-1: %i\n", ft_iterative_power(10, -1));
	printf("10^0: %i\n", ft_iterative_power(10, 0));

//ex03

	printf("\nRecursive\n");

	printf("10^3: %i\n", ft_recursive_power(10, 3));
	printf("2^8: %i\n", ft_recursive_power(2, 8));
	printf("2^-8: %i\n", ft_recursive_power(2, -8));
	printf("0^0: %i\n", ft_recursive_power(0, 0));
	printf("10^-1: %i\n", ft_recursive_power(10, -1));
	printf("10^0: %i\n", ft_recursive_power(10, 0));
	printf("-7^3: %i\n", ft_recursive_power(-7, 3));

//ex04
	printf("\n");	
	printf("%i\n", ft_fibonacci(9));
	printf("%i\n", ft_fibonacci(-1));
	printf("%i\n", ft_fibonacci(0));
	printf("%i\n", ft_fibonacci(1));
	printf("%i\n", ft_fibonacci(2));
	printf("%i\n", ft_fibonacci(3));
	printf("%i\n", ft_fibonacci(4));


//ex05

	printf("\n\nex05: \n");
	printf("%i\n", ft_sqrt(0));
	printf("%i\n", ft_sqrt(1));
	printf("%i\n", ft_sqrt(2));
	printf("%i\n", ft_sqrt(9));
	printf("%i\n", ft_sqrt(10));
	printf("%i\n", ft_sqrt(11));
	printf("%i\n", ft_sqrt(12));
	printf("%i\n", ft_sqrt(13));
	printf("%i\n", ft_sqrt(14));
	printf("%i\n", ft_sqrt(15));
	printf("%i\n", ft_sqrt(225));
	printf("raíz de 2147395600 es %i\n", ft_sqrt(2147395600));
	printf("raíz de 2147483647 es %i\n", ft_sqrt(2147483647));
	printf("%i\n", ft_sqrt(2147483647));
	printf("%i\n", ft_sqrt(21638420));
	printf("%i\n", ft_sqrt(-5));
	printf("%i\n", ft_sqrt(-4));


	
//ex06
	printf("\n");

	int j = 0;
	int h = 0;
	while (j < 100)
	{
		if (ft_is_prime(j) == 1)
		{
			printf("%i: %i\n", j, ft_is_prime(j));
			h++;
		}
		j++;
	}
	printf("%i números primos del 1 al 100\n", h);


	printf("2147483647: %i\n", ft_is_prime(2147483647));

	printf("\n\nex07:\n");


	//ex07
	printf("next  0: %i\n", ft_find_next_prime(0));
	printf("next  61: %i\n", ft_find_next_prime(61));
	printf("next  2147483646: %i\n", ft_find_next_prime(2147483646));
	printf("next  2147483647: %i\n", ft_find_next_prime(2147483647));
}

int test_ft_iterative_factorial(int nb)
{
	return ft_iterative_factorial(nb);
}

int test_ft_recursive_factorial(int nb)
{
	return ft_recursive_factorial(nb);
}

int test_ft_iterative_power(int nb, int power)
{
	return ft_iterative_power(nb, power);

}

