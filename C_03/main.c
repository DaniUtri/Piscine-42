#include <stdio.h>
#include <string.h>
#include "ex00/ft_strcmp.c"
#include "ex01/ft_strncmp.c"
#include "ex02/ft_strcat.c"
#include "ex03/ft_strncat.c"
#include "ex04/ft_strstr.c"
#include "ex05/ft_strlcat.c"

int	main(void)
{
	printf("\n*******\n");
	printf("ex00: strcmp");
	printf("\n*******\n");
	char	*s1;
	char	*s2;
	int		salida;
	s1 = "Bio";
	s2 = "aop";
	printf("\n");
	printf("\n");
	printf("===========\n");
	printf("Prueba 1\n");
	printf("===========\n");
	printf("s1: %s\n", s1);
	printf("s2: %s\n", s2);
	printf("\n");
	printf("Aplicamos la función strcmp(s1, s2).\n");
	printf("\n");
	salida = ft_strcmp(s1,s2);
	printf("La diferencia de caracteres obtenida es: %i\n", salida);
	printf("La diferencia obtenida con la función original es: %i\n", strcmp(s1, s2));

	s1 = "Bio";
	s2 = "Bio";
	printf("\n");
	printf("\n");
	printf("===========\n");
	printf("Prueba 1'\n");
	printf("===========\n");
	printf("s1: %s\n", s1);
	printf("s2: %s\n", s2);
	printf("\n");
	printf("Aplicamos la función strcmp(s1, s2).\n");
	printf("\n");
	salida = ft_strcmp(s1,s2);
	printf("La diferencia de caracteres obtenida es: %i\n", salida);
	printf("La diferencia obtenida con la función original es: %i\n", strcmp(s1, s2));


	printf("\n");
	printf("===========\n");
	printf("Prueba 2\n");
	printf("===========\n");
	s1 = "Adi";
	s2 = "Adioss";
	printf("s1: %s\n", s1);
	printf("s2: %s\n", s2);
	printf("\n");
	printf("Aplicamos la función strcmp(s1, s2).\n");
	printf("\n");
	salida = ft_strcmp(s1,s2);
	printf("La diferencia de caracteres obtenida es: %i\n", salida);
	printf("La diferencia obtenida con la función original es: %i\n", strcmp(s1, s2));

	printf("\n");
	printf("===========\n");
	printf("Prueba 3\n");
	printf("===========\n");
	s1 = "hola_amigo";
	s2 = "hola";
	printf("s1: %s\n", s1);
	printf("s2: %s\n", s2);
	printf("\n");
	printf("Aplicamos la función strcmp(s1, s2).\n");
	printf("\n");
	salida = ft_strcmp(s1,s2);
	printf("La diferencia de caracteres obtenida es: %i\n", salida);
	printf("La diferencia obtenida con la función original es: %i\n", strcmp(s1, s2));

	printf("\n");
	printf("===========\n");
	printf("Prueba 4\n");
	printf("===========\n");
	s1 = "Miu";
	s2 = "mUit";
	printf("s1: %s\n", s1);
	printf("s2: %s\n", s2);
	printf("\n");
	printf("Aplicamos la función strcmp(s1, s2).\n");
	printf("\n");
	salida = ft_strcmp(s1,s2);
	printf("La diferencia de caracteres obtenida es: %i\n", salida);
	printf("La diferencia obtenida con la función original es: %i\n", strcmp(s1, s2));


	printf("\n*******\n");
	printf("ex01: strncmp");
	printf("\n*******\n");
	printf("\n");
	printf("===========\n");
	printf("Prueba 1\n");
	printf("===========\n");
	s1 = "Hola";
	s2 = "Adios";
	printf("s1: %s\n", s1);
	printf("s2: %s\n", s2);
	printf("\n");
	printf("Aplicamos la función strncmp(s1, s2, n).\n");
	printf("Longitud a comprobar: %i", 3);
	printf("\n");
	salida = ft_strncmp(s1,s2, 3);
	printf("La diferencia de caracteres obtenida es: %i\n", salida);
	printf("La diferencia obtenida con la función original es: %i\n", strncmp(s1, s2, 3));

	printf("\n");
	printf("===========\n");
	printf("Prueba 2\n");
	printf("===========\n");
	s1 = "HolaS";
	s2 = "HolaT";
	printf("s1: %s\n", s1);
	printf("s2: %s\n", s2);
	printf("\n");
	printf("Aplicamos la función strncmp(s1, s2, n).\n");
	printf("Longitud a comprobar: %i", 3);
	printf("\n");
	salida = ft_strncmp(s1,s2, 3);
	printf("La diferencia de caracteres obtenida es: %i\n", salida);
	printf("La diferencia obtenida con la función original es: %i\n", strncmp(s1, s2, 3));

	printf("\n");
	printf("===========\n");
	printf("Prueba 2'\n");
	printf("===========\n");
	s1 = "HomaS";
	s2 = "HolaT";
	printf("s1: %s\n", s1);
	printf("s2: %s\n", s2);
	printf("\n");
	printf("Aplicamos la función strncmp(s1, s2, n).\n");
	printf("Longitud a comprobar: %i", 3);
	printf("\n");
	salida = ft_strncmp(s1,s2, 3);
	printf("La diferencia de caracteres obtenida es: %i\n", salida);
	printf("La diferencia obtenida con la función original es: %i\n", strncmp(s1, s2, 3));

	
	printf("\n");
	printf("===========\n");
	printf("Prueba 3\n");
	printf("===========\n");
	s1 = "Hoia";
	s2 = "HplaT";
	printf("s1: %s\n", s1);
	printf("s2: %s\n", s2);
	printf("\n");
	printf("Aplicamos la función strcnmp(s1, s2, n).\n");
	printf("Longitud a comprobar: %i", 3);
	printf("\n");
	salida = ft_strncmp(s1,s2, 3);
	printf("La diferencia de caracteres obtenida es: %i\n", salida);
	printf("La diferencia obtenida con la función original es: %i\n", strncmp(s1, s2, 3));	

	printf("\n");
	printf("===========\n");
	printf("Prueba 4\n");
	printf("===========\n");
	s1 = "Hola";
	s2 = "Ho";
	printf("s1: %s\n", s1);
	printf("s2: %s\n", s2);
	printf("\n");
	printf("Aplicamos la función strncmp(s1, s2, n).\n");
	printf("Longitud a comprobar: %i", 8);
	printf("\n");
	salida = ft_strncmp(s1,s2, 8);
	printf("La diferencia de caracteres obtenida es: %i\n", salida);
	printf("La diferencia obtenida con la función original es: %i\n", strncmp(s1, s2, 8));

	printf("\n");
	printf("===========\n");
	printf("Prueba 5\n");
	printf("===========\n");
	s1 = "H";
	s2 = "H";
	printf("s1: %s\n", s1);
	printf("s2: %s\n", s2);
	printf("\n");
	printf("Aplicamos la función strncmp(s1, s2, n).\n");
	printf("Longitud a comprobar: %i", 4);
	printf("\n");
	salida = ft_strncmp(s1,s2, 4);
	printf("La diferencia de caracteres obtenida es: %i\n", salida);
	printf("La diferencia obtenida con la función original es: %i\n", strncmp(s1, s2, 4));

	printf("\n");
	printf("===========\n");
	printf("Prueba 6\n");
	printf("===========\n");
	s1 = "IgualSi";
	s2 = "IgualNo";
	printf("s1: %s\n", s1);
	printf("s2: %s\n", s2);
	printf("\n");
	printf("Aplicamos la función strncmp(s1, s2, n).\n");
	printf("Longitud a comprobar: %i", 5);
	printf("\n");
	salida = ft_strncmp(s1,s2, 5);
	printf("La diferencia de caracteres obtenida es: %i\n", salida);
	printf("La diferencia obtenida con la función original es: %i\n", strncmp(s1, s2, 5));
	printf("\n");

	printf("\n");
	printf("===========\n");
	printf("Prueba 7\n");
	printf("===========\n");
	s1 = "IgualSi";
	s2 = "IgualNo";
	printf("s1: %s\n", s1);
	printf("s2: %s\n", s2);
	printf("\n");
	printf("Aplicamos la función strncmp(s1, s2, n).\n");
	printf("Longitud a comprobar: %i", 6);
	printf("\n");
	salida = ft_strncmp(s1,s2, 6);
	printf("La diferencia de caracteres obtenida es: %i\n", salida);
	printf("La diferencia obtenida con la función original es: %i\n", strncmp(s1, s2, 6));
	printf("\n");

	printf("\n");
	printf("===========\n");
	printf("Prueba 8\n");
	printf("===========\n");
	s1 = "IgualSi";
	s2 = "NgualNo";
	printf("s1: %s\n", s1);
	printf("s2: %s\n", s2);
	printf("\n");
	printf("Aplicamos la función strncmp(s1, s2, n).\n");
	printf("Longitud a comprobar: %i", 0);
	printf("\n");
	salida = ft_strncmp(s1,s2, 0);
	printf("La diferencia de caracteres obtenida es: %i\n", salida);
	printf("La diferencia obtenida con la función original es: %i\n", strncmp(s1, s2, 0));
	printf("\n");

	printf("\n");
	printf("===========\n");
	printf("Prueba 9\n");
	printf("===========\n");
	s1 = "Igual";
	s2 = "Iguan";
	printf("s1: %s\n", s1);
	printf("s2: %s\n", s2);
	printf("\n");
	printf("Aplicamos la función strncmp(s1, s2, n).\n");
	printf("Longitud a comprobar: %i", -5);
	printf("\n");
	salida = ft_strncmp(s1,s2, -5);
	printf("La diferencia de caracteres obtenida es: %i\n", salida);
	printf("La diferencia obtenida con la función original es: %i\n", strncmp(s1, s2, -5));
	printf("\n");

	printf("\n");
	printf("===========\n");
	printf("Prueba 10\n");
	printf("===========\n");
	s1 = "";
	s2 = "Iguan";
	printf("s1: %s\n", s1);
	printf("s2: %s\n", s2);
	printf("\n");
	printf("Aplicamos la función strncmp(s1, s2, n).\n");
	printf("Longitud a comprobar: %i", 2);
	printf("\n");
	salida = ft_strncmp(s1,s2, 2);
	printf("La diferencia de caracteres obtenida es: %i\n", salida);
	printf("La diferencia obtenida con la función original es: %i\n", strncmp(s1, s2, 2));
	printf("\n");

	printf("\n");
	printf("===========\n");
	printf("Prueba 11\n");
	printf("===========\n");
	s1 = "Igual";
	s2 = "";
	printf("s1: %s\n", s1);
	printf("s2: %s\n", s2);
	printf("\n");
	printf("Aplicamos la función strncmp(s1, s2, n).\n");
	printf("Longitud a comprobar: %i", 3);
	printf("\n");
	salida = ft_strncmp(s1,s2, 3);
	printf("La diferencia de caracteres obtenida es: %i\n", salida);
	printf("La diferencia obtenida con la función original es: %i\n", strncmp(s1, s2, 3));
	printf("\n");





	char *s1i = "Pepe165";
	char *s2i = "Pepe1654";
	char *s3i = "Pepe1651dasdfas";
	char *s4i = "Pepe1654dasdfas2";
	char *s5i = " 1bac";
	char *s6i = "1ba";
	
	printf("\n---------");
	printf("\nPruebas Alberto\n");	
	printf("---------\n");

	printf("\nFunción original strncmp:\n");
	printf("%i\n", strncmp(s1i, s2i, 20));
	printf("Fake strncmp:\n");
	printf("%i\n", ft_strncmp(s1i, s2i, 20));
	printf("\nFunción original strncmp:\n");
	printf("%i\n", strncmp(s1i, s2i, 5));
	printf("Fake strncmp:\n");
	printf("%i\n", ft_strncmp(s1i, s2i, 5));
	printf("\nFunción original strncmp:\n");
	printf("%i\n", strncmp(s1i, s2i, 6));
	printf("Fake strncmp:\n");
	printf("%i\n", ft_strncmp(s1i, s2i, 6));
	printf("\nFunción original strncmp:\n");
	printf("%i\n", strncmp(s1i, s2i, 12));
	printf("Fake strncmp:\n");
	printf("%i\n", ft_strncmp(s1i, s2i, 12));
	printf("\nFunción original strncmp:\n");
	printf("%i\n", strncmp(s3i, s6i, 16));
	printf("Fake strncmp:\n");
	printf("%i\n", strncmp(s3i, s6i, 16));
	printf("\nFunción original strncmp:\n");
	printf("%i\n", strncmp(s3i, s4i, 16));
	printf("Fake strncmp:\n");
	printf("%i\n", ft_strncmp(s3i, s4i, 16));
	printf("\nFunción original strncmp:\n");
	printf("%i\n", strncmp(s5i, s6i, 0));
	printf("Fake strncmp:\n");
	printf("%i\n", ft_strncmp(s5i, s6i, 0));
	printf("\nFunción original strncmp:\n");
	printf("%i\n", strncmp(s5i, s6i, 1));
	printf("Fake strncmp:\n");
	printf("%i\n", ft_strncmp(s5i, s6i, 1));
	printf("\nFunción original strncmp:\n");
	printf("%i\n", strncmp(s5i, s6i, 2));
	printf("Fake strncmp:\n");
	printf("%i\n", ft_strncmp(s5i, s6i, 2));
	printf("\nFunción original strncmp:\n");
	printf("%i\n", strncmp(s5i, s6i, 4));
	printf("Fake strncmp:\n");
	printf("%i\n", ft_strncmp(s5i, s6i, 4));


	
	printf("\n*******\n");
	printf("ex02: strcat");
	printf("\n*******\n");
	printf("\n");
	printf("===========\n");
	printf("Prueba 1\n");
	printf("===========\n");
	char	s1_[11] = "Hola";
	char	s2_[] = " Adios";
	printf("s1: %s\n", s1_);
	printf("s2: %s\n", s2_);
	printf("\n");
	printf("Aplicamos la función strcat(s1, s2).\n");
	printf("\n");
	ft_strcat(s1_, s2_);
	printf("La diferencia de caracteres obtenida es: %s\n", s1_);
	char	s1__[11] = "Hola";
	char	s2__[] = " Adios";
	strcat(s1__, s2__);
	printf("La diferencia obtenida con la función original es: %s\n", s1__);
	
	printf("\n===========\n");
	printf("Prueba 2\n");
	printf("===========\n");
	char	s11_[28] = "Hey";
	char	s22_[] = " Jony, que te pasa, broo";
	printf("s1: %s\n", s11_);
	printf("s2: %s\n", s22_);
	printf("\n");
	printf("Aplicamos la función strcat(s1, s2).\n");
	printf("\n");
	ft_strcat(s11_, s22_);
	printf("La diferencia de caracteres obtenida es: %s\n", s11_);
	char	s11___[28] = "Hey";
	char	s22__[] = " Jony, que te pasa, broo";
	strcat(s11___, s22__);
	printf("La diferencia obtenida con la función original es: %s\n", s11___);


	printf("\n*******\n");
	printf("ex03: strncat");
	printf("\n*******\n");
	printf("\n");
	printf("===========\n");
	printf("Prueba 1\n");
	printf("===========\n");
	char	s1__1[11] = "Hola";
	char	s2__1[] = " Adios";
	printf("s1: %s\n", s1__1);
	printf("s2: %s\n", s2__1);
	printf("\n");
	printf("Aplicamos la función strncat(s1, s2).\n");
	printf("El número de caracteres a copiar es: %i\n", 2);
	printf("\n");
	ft_strncat(s1__1, s2__1, 2);
	printf("La cadena de caracteres obtenida es: %s\n", s1__1);
	char	s1__11[11] = "Hola";
	char	s2__11[] = " Adios";
	strncat(s1__11, s2__11, 2);
	printf("La diferencia obtenida con la función original es: %s\n", s1__11);

	printf("\n===========\n");
	printf("Prueba 2\n");
	printf("===========\n");
	char	s1__12[11] = "Hola";
	char	s2__12[] = "su";
	printf("s1: %s\n", s1__12);
	printf("s2: %s\n", s2__12);
	printf("\n");
	printf("Aplicamos la función strncat(s1, s2).\n");
	printf("El número de caracteres a copiar es: %i\n", 5);
	printf("\n");
	ft_strncat(s1__12, s2__12, 5);
	printf("La cadena de caracteres obtenida es: %s\n", s1__12);
	char	s1__112[11] = "Hola";
	char	s2__112[] = "su";
	strncat(s1__112, s2__112, 5);
	printf("La diferencia obtenida con la función original es: %s\n", s1__112);
	
	printf("\n===========\n");
	printf("Prueba 2'\n");
	printf("===========\n");
	char	s1__1230[11] = "Hola";
	char	s2__1230[] = "su";
	printf("s1: %s\n", s1__1230);
	printf("s2: %s\n", s2__1230);
	printf("\n");
	printf("Aplicamos la función strncat(s1, s2).\n");
	printf("El número de caracteres a copiar es: %i\n", 1);
	printf("\n");
	ft_strncat(s1__1230, s2__1230, 1);
	printf("La cadena de caracteres obtenida es: %s\n", s1__1230);
	char	s1__11230[11] = "Hola";
	char	s2__11230[] = "su";
	strncat(s1__11230, s2__11230, 1);
	printf("La diferencia obtenida con la función original es: %s\n", s1__11230);


	printf("\n===========\n");
	printf("Prueba 3\n");
	printf("===========\n");
	char	s1__123[11] = "Hola";
	char	s2__123[] = "sui";
	printf("s1: %s\n", s1__123);
	printf("s2: %s\n", s2__123);
	printf("\n");
	printf("Aplicamos la función strncat(s1, s2, n).\n");
	printf("El número de caracteres a copiar es: %i\n", 3);
	printf("\n");
	ft_strncat(s1__123, s2__123, 3);
	printf("La cadena de caracteres obtenida es: %s\n", s1__123);
	char	s1__1123[11] = "Hola";
	char	s2__1123[] = "sui";
	strncat(s1__1123, s2__1123, 3);
	printf("La diferencia obtenida con la función original es: %s\n", s1__1123);

	printf("\n===========\n");
	printf("Prueba 4\n");
	printf("===========\n");
	char	s1__123_[6] = "Hola";
	char	s2__123_[] = "sui";
	printf("s1: %s\n", s1__123_);
	printf("s2: %s\n", s2__123_);
	printf("\n");
	printf("Aplicamos la función strncat(s1, s2, n).\n");
	printf("El número de caracteres a copiar es: %i\n", 0);
	printf("\n");
	ft_strncat(s1__123_, s2__123_, 0);
	printf("La cadena de caracteres obtenida es: %s\n", s1__123_);
	char	s1__1123_[11] = "Hola";
	char	s2__1123_[] = "sui";
	strncat(s1__1123_, s2__1123_, 0);
	printf("La diferencia obtenida con la función original es: %s\n", s1__1123_);

	printf("\n----------");
	printf("\nPruebas Alberto\n");
	printf("----------\n");
	printf("\nOriginal:\n");
	char i7[10] = "que tal1";
    char i8[] = "eo";

    printf("%s", strncat(i7, i8, 1));
    printf("\n");

	printf("\nFake\n");
    char d7[10] = "que tal1";
    char d8[] = "eo";

    printf("%s", ft_strncat(d7, d8, 1));
    printf("\n");

	printf("\nOriginal\n");
	
    char a1[10] = "que tal1";
    char b1[] = "eo";

    printf("%s", strncat(a1, b1, 0));
    printf("\n");

	printf("\nFake\n");

    char a2[10] = "que tal1";
    char b2[] = "eo";

    printf("%s", ft_strncat(a2, b2, 0));
    printf("\n");

	char a3[11] = "que tal1";
    char b3[] = "eo";

	printf("\nOriginal\n");

    printf("%s", strncat(a3, b3, 11));
    printf("\n");
	char a4[11] = "que tal1";
    char b4[] = "eo";

	printf("\nFake\n");

	printf("%s", ft_strncat(a4, b4, 11));
    printf("\n");
	char d2[11] = "hola";
	char d3[] = "su";
	
	printf("\nOriginal\n");

	printf("%s", strncat(d2, d3, 5));
    printf("\n");
	char d4[11] = "hola";
	char d5[] = "su";

	printf("\nFake\n");
	printf("%s", ft_strncat(d4, d5, 5));
	printf("\n");
	
	printf("\n*******\n");
	printf("ex04: strstr");
	printf("\n*******\n");
	printf("\n");
	printf("===========\n");
	printf("Prueba 1\n");
	printf("===========\n");
	char	s1__1_[] = "Hola_holita";
	char	s2__1_[] = "feo";
	printf("s1: %s\n", s1__1_);
	printf("s2: %s\n", s2__1_);
	printf("\n");
	printf("Aplicamos la función strstr(s1, s2)\n");
	printf("\n");
	char	*num;
	num = ft_strstr(s1__1_, s2__1_);
	printf("La posición de la cadena de caracteres obtenida es: %s\n", num);
	char	s1__11_[]= "Hola_holita";
	char	s2__11_[] = "feo";
	char	*num2;
	num2 = strstr(s1__11_, s2__11_);
	printf("La diferencia obtenida con la función original es: %s\n", num2);

	printf("\n===========\n");
	printf("Prueba 2\n");
	printf("===========\n");
	char	s1__1_i[] = "Hola_holita";
	char	s2__1_i[] = "_";
	printf("s1: %s\n", s1__1_i);
	printf("s2: %s\n", s2__1_i);
	printf("\n");
	printf("Aplicamos la función strstr(s1, s2)\n");
	printf("\n");
	char	*numi;
	numi = ft_strstr(s1__1_i, s2__1_i);
	printf("La posición de la cadena de caracteres obtenida es: %s\n", numi);
	char	s1__11_i[]= "Hola_holita";
	char	s2__11_i[] = "_";
	char	*num2i;
	num2i = strstr(s1__11_i, s2__11_i);
	printf("La posicion de la cadena de caracteres obtenida\n con la función original: %s\n", num2i);

	printf("\n===========\n");
	printf("Prueba 3\n");
	printf("===========\n");
	char	s1__1_0[] = "Hola_holita";
	char	s2__1_0[] = "";
	printf("s1: %s\n", s1__1_0);
	printf("s2: %s\n", s2__1_0);
	printf("\n");
	printf("Aplicamos la función strstr(s1, s2)\n");
	printf("\n");
	char	*num0;
	num0 = ft_strstr(s1__1_0, s2__1_0);
	printf("La posición de la cadena de caracteres obtenida es: %s\n", num0);
	char	s1__11_0[]= "Hola_holita";
	char	s2__11_0[] = "";
	char	*num20;
	num20 = strstr(s1__11_0, s2__11_0);
	printf("La diferencia obtenida con la función original es: %s\n", num20);

	printf("\n===========\n");
	printf("Prueba 4\n");
	printf("===========\n");
	char	s1__1_01[] = "Hola_holita";
	char	s2__1_01[] = "ta";
	printf("s1: %s\n", s1__1_01);
	printf("s2: %s\n", s2__1_01);
	printf("\n");
	printf("Aplicamos la función strstr(s1, s2)\n");
	printf("\n");
	char	*num01;
	num01 = ft_strstr(s1__1_01, s2__1_01);
	printf("La posición de la cadena de caracteres obtenida es: %s\n", num01);
	char	s1__11_01[]= "Hola_holita";
	char	s2__11_01[] = "ta";
	char	*num201;
	num201 = strstr(s1__11_01, s2__11_01);
	printf("La diferencia obtenida con la función original es: %s\n", num201);

	printf("\n===========\n");
	printf("Prueba 5\n");
	printf("===========\n");
	char	s1__1_01_8[] = "Hola_holita";
	char	s2__1_01_8[] = "oli";
	printf("s1: %s\n", s1__1_01_8);
	printf("s2: %s\n", s2__1_01_8);
	printf("\n");
	printf("Aplicamos la función strstr(s1, s2)\n");
	printf("\n");
	char	*num01_9;
	num01_9 = ft_strstr(s1__1_01_8, s2__1_01_8);
	printf("La posición de la cadena de caracteres obtenida es: %s\n", num01_9);
	char	s1__11_01_9[]= "Hola_holita";
	char	s2__11_01_9[] = "oli";
	char	*num201_9;
	num201_9 = strstr(s1__11_01_9, s2__11_01_9);
	printf("La diferencia obtenida con la función original es: %s\n", num201_9);




	printf("\n*******\n");
	printf("ex05: strlcat");
	printf("\n*******\n");
	printf("\n");
	printf("===========\n");
	printf("Prueba 1\n");
	printf("===========\n");
	char	s15[8] = "Hey";
	char	*s25;
	s25 = "###";
	printf("s1: %s\n", s15);
	printf("s2: %s\n", s25);
	printf("\n");
	printf("Aplicamos la función strlcat(s1, s2, n).\n");
	printf("\n");
	printf("Longitud total: %i\n", 8);
	unsigned int	salida2;
	salida2 = ft_strlcat(s15,s25, 8);
	printf("La longitud de caracteres obtenida es: %u\n", salida2);
	printf("El destino rsultante es: %s\n", s15);
	char	s15p[8] = "Hey";
	char	*s25p;
	s25p = "###";
	printf("La longitud obtenida con la función original es: %lu\n", strlcat(s15p, s25p, 8));
	printf("El destino rsultante es: %s\n", s15p);

	printf("\n===========\n");
	printf("Prueba 2\n");
	printf("===========\n");
	char	s15_[7] = "Hola";
	char	*s25_;
	s25_ = "Adi";
	printf("s1: %s\n", s15_);
	printf("s2: %s\n", s25_);
	printf("\n");
	printf("Aplicamos la función strlcat(s1, s2, n).\n");
	printf("\n");
	printf("Longitud total: %i\n", 7);
	salida2 = ft_strlcat(s15_,s25_, 7);
	printf("La longitud de caracteres obtenida es: %d\n", salida2);
	printf("El destino resultante es: %s\n", s15_);
	char	s15_1[7] = "Hola";
	char	*s25_1;
	s25_1 = "Adi";
	printf("La longitud obtenida con la función original es: %lu\n", strlcat(s15_1, s25_1, 7));
	printf("El destino resultante es: %s\n", s15_1);

	printf("\n===========\n");
	printf("Prueba 3\n");
	printf("===========\n");
	char	s15__[12] = "olaolaola";
	char	*s25__;
	s25__ = "Adii";
	printf("s1: %s\n", s15__);
	printf("s2: %s\n", s25__);
	printf("\n");
	printf("Aplicamos la función strlcat(s1, s2, n).\n");
	printf("\n");
	printf("Longitud total: %i\n", 2);
	salida2 = ft_strlcat(s15__,s25__, 2);
	printf("La longitud de caracteres obtenida es: %u\n", salida2);
	printf("El destino resultante es: %s\n", s15__);
	char	s15__1[12] = "olaolaola";
	char	*s25__1;
	s25__1 = "Adii";
	printf("La longitud obtenida con la función original es: %lu\n", strlcat(s15__1, s25__1, 2)); 
	printf("El destino resultante es: %s\n", s15__1);

	printf("\n");
	
	printf("\n===========\n");
	printf("Prueba 4\n");
	printf("===========\n");
	char	s15__12[12] = "";
	char	*s25__12;
	s25__12 = "Adii";
	printf("s1: %s\n", s15__12);
	printf("s2: %s\n", s25__12);
	printf("\n");
	printf("Aplicamos la función strlcat(s1, s2, n).\n");
	printf("\n");
	printf("Longitud total: %i\n", 2);
	salida2 = ft_strlcat(s15__12,s25__12, 2);
	printf("La longitud de caracteres obtenida es: %u\n", salida2);
	printf("El destino resultante es: %s\n", s15__12);
	char	s15__112[12] = "";
	char	*s25__112;
	s25__112 = "Adii";
	printf("La longitud obtenida con la función original es: %lu\n", strlcat(s15__112, s25__112, 2)); 
	printf("El destino resultante es: %s\n", s15__112);

	printf("\n");


	printf("\n===========\n");
	printf("Prueba 5\n");
	printf("===========\n");
	char	s15__45[12] = "olaolaola";
	char	*s25__45;
	s25__45 = "";
	printf("s1: %s\n", s15__45);
	printf("s2: %s\n", s25__45);
	printf("\n");
	printf("Aplicamos la función strlcat(s1, s2, n).\n");
	printf("\n");
	printf("Longitud total: %i\n", 2);
	salida2 = ft_strlcat(s15__45,s25__45, 2);
	printf("La longitud de caracteres obtenida es: %u\n", salida2);
	printf("El destino resultante es: %s\n", s15__45);
	char	s15__145[12] = "olaolaola";
	char	*s25__145;
	s25__145 = "";
	printf("La longitud obtenida con la función original es: %lu\n", strlcat(s15__145, s25__145, 2)); 
	printf("El destino resultante es: %s\n", s15__145);

	printf("\n");

	printf("\n===========\n");
	printf("Prueba 6\n");
	printf("===========\n");
	char	s15__451[12] = "olaolaola";
	char	*s25__451;
	s25__451 = "";
	printf("s1: %s\n", s15__451);
	printf("s2: %s\n", s25__451);
	printf("\n");
	printf("Aplicamos la función strlcat(s1, s2, n).\n");
	printf("\n");
	printf("Longitud total: %i\n", 12);
	salida2 = ft_strlcat(s15__451,s25__451, 12);
	printf("La longitud de caracteres obtenida es: %u\n", salida2);
	printf("El destino resultante es: %s\n", s15__451);
	char	s15__1451[12] = "olaolaola";
	char	*s25__1451;
	s25__1451 = "";
	printf("La longitud obtenida con la función original es: %lu\n", strlcat(s15__1451, s25__1451, 12)); 
	printf("El destino resultante es: %s\n", s15__1451);

	printf("\n");


	printf("\n===========\n");
	printf("Prueba 7\n");
	printf("===========\n");
	char	s15_00[7] = "Hola";
	char	*s25_00;
	s25_00 = "Adi";
	printf("s1: %s\n", s15_00);
	printf("s2: %s\n", s25_00);
	printf("\n");
	printf("Aplicamos la función strlcat(s1, s2, n).\n");
	printf("\n");
	printf("Longitud total: %i\n", 0);
	salida2 = ft_strlcat(s15_00,s25_00, 0);
	printf("La longitud de caracteres obtenida es: %d\n", salida2);
	printf("El destino resultante es: %s\n", s15_00);
	char	s15_100[7] = "Hola";
	char	*s25_100;
	s25_100 = "Adi";
	printf("La longitud obtenida con la función original es: %lu\n", strlcat(s15_100, s25_100, 0));
	printf("El destino resultante es: %s\n", s15_100);
	
	printf("\n");
	printf("\n---------\n");
	printf("Pruebas Alberto\n");
	printf("---------\n");

	char	src[6] = "holas";
	char	src2[6] = "holas";
	char	dest[15] = "mundo";
	char	dest2[15] = "mundo";

	printf("\n=========");
	printf("\nPrueba 1\n");
	printf("=========\n");
	
	printf("Fake: %u\n", ft_strlcat(dest, src, 15));
	printf("Fake dest: %s\n", dest);

	printf("Original: %lu\n", strlcat(dest2, src2, 15));
	printf("Original dest: %s\n", dest2);
	printf("\n");

	printf("\n=========");
	printf("\nPrueba 2\n");
	printf("=========\n");

	printf("Fake: %u\n", ft_strlcat(dest, src, 0));
	printf("Fake dest: %s\n", dest);

	printf("Original: %lu\n", strlcat(dest2, src2, 0));
	printf("Original dest: %s\n", dest2);
	printf("\n");

	printf("\n=========");
	printf("\nPrueba 3\n");
	printf("=========\n");


	printf("Fake: %u\n", ft_strlcat(dest, src, 0));
	printf("Fake dest: %s\n", dest);

	printf("Original: %lu\n", strlcat(dest2, src2, 0));
	printf("Original dest: %s\n", dest2);
	printf("\n");

	printf("\n=========");
	printf("\nPrueba 4\n");
	printf("=========\n");

	printf("Fake: %u\n", ft_strlcat(dest, src, 15));
	printf("Fake dest: %s\n", dest);

	printf("Original: %lu\n", strlcat(dest2, src2, 15));
	printf("Original dest: %s\n", dest2);
	printf("\n");

	printf("\n=========");
	printf("\nPrueba 5\n");
	printf("=========\n");


	printf("Original: %lu\n", strlcat(dest, src, 3));
	printf("Original dest: %s\n", dest);
	printf("Fake: %u\n", ft_strlcat(dest, src, 3));
	printf("Fake dest: %s\n", dest);
	printf("\n");

	printf("\n=========");
	printf("\nPrueba 6\n");
	printf("=========\n");

	printf("Original: %lu\n", strlcat(dest, src, 4));
	printf("Original dest: %s\n", dest);
	printf("Fake: %u\n", ft_strlcat(dest, src, 4));
	printf("Fake dest: %s\n", dest);
	printf("\n");

	printf("\n=========");
	printf("\nPrueba 7\n");
	printf("=========\n");

	printf("Original: %lu\n", strlcat(dest, src, 5));
	printf("Original dest: %s\n", dest);
	printf("Fake: %u\n", ft_strlcat(dest, src, 5));
	printf("Fake dest: %s\n", dest);
	printf("\n");

	printf("\n=========");
	printf("\nPrueba 8\n");
	printf("=========\n");

	printf("Original: %lu\n", strlcat(dest, src, 7));
	printf("Original dest: %s\n", dest);
	printf("Fake: %u\n", ft_strlcat(dest, src, 7));
	printf("Fake dest: %s\n", dest);
	printf("\n");

	printf("\n=========");
	printf("\nPrueba 9\n");
	printf("=========\n");
	printf("Original: %lu\n", strlcat(dest, src, 8));
	printf("Original dest: %s\n", dest);
	printf("Fake: %u\n", ft_strlcat(dest, src, 8));
	printf("Fake dest: %s\n", dest);
	printf("\n");
	


}
