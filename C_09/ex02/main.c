#include <stdio.h>
#include <string.h>
#include "ft_split.c"

int	main(void)
{
printf("\n***************\n");
printf("ex05: ft_split");
printf("\n***************\n");

printf("\nEscriba una función que divida una cadena de caracteres en función de otra cadena de caracteres");
printf("\nHabrá que utilizar cada carácter de la cadena charset como separador.\n");
printf("\nLa función retorna un array donde cada uno de sus elementos contiene la dirección\n");
printf("de una cadena de caracteres comprendida entre dos separadores. El último elemento");
printf("\ndel array tendrá que ser igual a 0 para indicar el final del array.\n");
printf("\nSu array no puede tener cadenas vacías. Saque las conclusiones pertinentes.\n");
printf("\nLa cadena que se transmitirá no será modificable.\n");

printf("\n\n\n");
char	*str_splt;
char	**array;
char	*sep;
int	i;

str_splt = "i  i     Un---- ---a o   ,  ,    ia,-9-ia,  o   ,     i,-.-,  o--o i i";
sep = ",- ";

printf("Supongamos el siguiente string: \"%s\"\n", str_splt);
printf("\nSupongamos los siguientes separadores: \"%s\"\n", sep);

array = ft_split(str_splt, sep);
i = -1;

while (array[++i])
	printf("%s, ", array[i]);

str_splt = "o- iii-o";
sep = " ,-";
printf("\n\n\n");
printf("Supongamos el siguiente string: \"%s\"\n", str_splt);
printf("\nSupongamos los siguientes separadores: \"%s\"\n", sep);

array = ft_split(str_splt, sep);
i = -1;
printf("\n");
while (array[++i])
	printf("%s, ", array[i]);
	
str_splt = "u5QxYc0UrDm0AAhy sHZABT  Wl SlCL1";
sep = "s    pw82Te";
printf("\n\n\n");
printf("Supongamos el siguiente string: \"%s\"\n", str_splt);
printf("\nSupongamos los siguientes separadores: \"%s\"\n", sep);

array = ft_split(str_splt, sep);
i = -1;
printf("\n");
while (array[++i])
	printf("%s, ", array[i]);
str_splt = "                         ";
sep = "     ";

printf("\n\n\n");

printf("Supongamos el siguiente string: \"%s\"\n", str_splt);
printf("\nSupongamos los siguientes separadores: \"%s\"\n", sep);
array = ft_split(str_splt, sep);
i = -1;
printf("\n");
while (array[++i])
	printf("%s, ", array[i]);

printf("\n");		

str_splt = "69yXE";
sep = "69yXE";

printf("\n\n\n");

printf("Supongamos el siguiente string: \"%s\"\n", str_splt);
printf("\nSupongamos los siguientes separadores: \"%s\"\n", sep);

array = ft_split(str_splt, sep);
i = -1;
printf("\n");
while (array[++i])
	printf("%s, ", array[i]);

printf("\n");	
	
str_splt = "Xnngbz7yrvMKDEoicdM2kTQJEqaaVFuYZadnBQrp1k6b";
sep = "KbFuG";

printf("\n\n\n");

printf("Supongamos el siguiente string: \"%s\"\n", str_splt);
printf("\nSupongamos los siguientes separadores: \"%s\"\n", sep);

array = ft_split(str_splt, sep);
i = -1;
printf("\n");
while (array[++i])
	printf("%s, ", array[i]);

printf("\n");
					
str_splt = "Xnngbz7yrvMKDEoicdM2kTQJEqaaVFuYZadnBQrp1k6m";
sep = "KbFuG";

printf("\n\n\n");

printf("Supongamos el siguiente string: \"%s\"\n", str_splt);
printf("\nSupongamos los siguientes separadores: \"%s\"\n", sep);

array = ft_split(str_splt, sep);
i = -1;
printf("\n");
while (array[++i])
	printf("%s, ", array[i]);

printf("\n");					
}
