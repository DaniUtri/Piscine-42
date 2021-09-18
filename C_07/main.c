#include <stdio.h>
#include <string.h>
#include "ex00/ft_strdup.c"
#include "ex01/ft_range.c"
#include "ex02/ft_ultimate_range.c"
#include "ex03/ft_strjoin.c"
#include "ex05/ft_split.c"

int main()
{
	printf("\n***************\n");
	printf("ex00: ft_strdup");
	printf("\n***************\n");
    
	printf("\n\"The strdup() function allocates sufficient memory for a copy of the string s1,\n");
   	printf("does the copy, and returns a pointer to it. The pointer may subsequently be \n");
   	printf("used as an argument to the function free(3).\"\n");

	char source[] = "Hola amigo";

	printf("\nComo ejemplo tomamos la cadena: %s\n\n", source);
	printf("Vamos a crear una copia dinámica de la cadena fuente (cadena objetivo).\nLa función va a devolver un puntero a la cadena fuente.\n");

    char* target1 = ft_strdup(source);
    char* target2 = strdup(source);

    printf("\nImprimimos el puntero de la copia: %s\n", target1);
	printf("\nImprimimos el puntero de la copia con la función original: %s\n", target2);
	printf("\n");

	printf("\n***************\n");
	printf("ex01: ft_range");
	printf("\n***************\n");

	printf("\nEscriba una función ft_range que devuelva un array de int. Este array de int\n");
	printf("contendrá todos los valores entre min y max.\n");
	printf("\nMin incluido, Max excluido.\n");
	printf("\nSi el valor min es superior o igual al valor max, se devolverá un puntero nulo.\n");

	int	*num1;

	num1 = ft_range(1, 10);

	printf("\nVamos a crear un array de int -> ft_range(1, 10): ");
	int	i;
	i = 0;
	while (i <  10 - 1)
	{
		printf("%d ", num1[i]);
		i++;
	}
	printf("\n");

	int	*num2;

	num2 = ft_range(5, 25);

	printf("\nVamos a crear un array de int -> ft_range(5, 25): ");
	i = 0;
	while (i <  25 - 5)
	{
		printf("%d ", num2[i]);
		i++;
	}
	printf("\n");

	int	*num2_1;

	num2_1 = ft_range(-5, 10);

	printf("\nVamos a crear un array de int -> ft_range(-5, 10): ");
	i = 0;
	while (i <  15)
	{
		printf("%d ", num2_1[i]);
		i++;
	}
	printf("\n");

	int	*num2_2;

	num2_2 = ft_range(-15, -5);

	printf("\nVamos a crear un array de int -> ft_range(-15, -5): ");
	i = 0;
	while (i <  10)
	{
		printf("%d ", num2_2[i]);
		i++;
	}
	printf("\n");




	printf("\n***************\n");
	printf("ex02: ft_ultimate_range");
	printf("\n***************\n");
	
	printf("\nEscriba una función ft_ultimate_range que asigne memoria y datos a un array\n");
	printf("de int. Este array de int contendrá todos los valores entre min y max.\n");
	printf("\nMin includio, max excluido.\n");
	printf("\nDevolverá el tamaño de range (o -1 en el caso de problemas).\n");
	printf("\nSi el valor min es superior o igual al valor max, range apuntará a NULL y retornará 0.\n");

	int	*range = NULL;
	int	num3;

	num3 = ft_ultimate_range(&range, -5, 55);

	printf("\nVamos a crear un array de int -> ft_ultimate_range(range, -5, 55): ");
	i = 0;
	while (i <  60)
	{
		printf("%d ", range[i]);
		i++;
	}
	printf("\n");
	printf("\nEl tamaño del range es: %i\n", num3);

	int	*range1 = NULL;

	num3 = ft_ultimate_range(&range1, 0, 13);

	printf("\nVamos a crear un array de int -> ft_ultimate_range(range, 0, 13): ");
	i = 0;
	while (i <  13)
	{
		printf("%d ", range1[i]);
		i++;
	}
	printf("\n");
	printf("\nEl tamaño del range es: %i\n", num3);
    
	printf("\n***************\n");
	printf("ex03: ft_strjoin");
	printf("\n***************\n");

	printf("\nEscriba una función que concatene el conjunto de cadenas de caracteres apuntadas\n");
	printf("por strs, separándolas por sep.\n");
	printf("\nsize representa el tamaño de strs.\n");
	printf("\nSi size vale 0, habrá que retornar una cadena de caracteres vacía que podemos free()\n");

	char	**strs;
	char	*sep;
	int		size;
	char	*dest;

	size = 6;
	sep = "-|-";
	i = 0;
	strs = (char **)malloc(sizeof(char *) * size);
	while (i < size)
	{
		strs[i] = (char *)malloc(sizeof(char ) * size);
		strs[i][0] = 'h';
		strs[i][1] = 'o';
		strs[i][2] = '\0';
		i++;
	}


	printf("\nLa frase a concatenar es: ");
	i = 0;
	while(i < size)
	{
		printf("%s ", strs[i]);
		i++;
	}

	printf("\nLos separadores son: \"%s\"\n", sep);
	dest = ft_strjoin(size, strs, sep);
	printf("\nEl resultado es: %s\n", dest);


	char	**strs_;
	char	*sep_;
	int		size_;
	char	*dest_;

	size_ = 5;
	sep_ = "";
	i = 0;
	strs_ = (char **)malloc(sizeof(char *) * size_);
	while (i < size_)
	{
		strs_[i] = (char *)malloc(sizeof(char ) * size_);
		strs_[i][0] = 'S';
		strs_[i][1] = 'U';
		strs_[i][2] = '\0';
		i++;
	}

	printf("\nLa frase a concatenar es: ");
	i = 0;
	while(i < size_)
	{
		printf("%s ", strs_[i]);
		i++;
	}
	printf("\nLos separadores son: \"%s\"\n", sep_);
	dest_ = ft_strjoin(size_, strs_, sep_);
	printf("\nEl resultado es: %s\n", dest_);

	strs = malloc(sizeof(char **) * 6);
	strs[5] = 0;
	strs[0] = malloc(sizeof(char *) * 5);
	strs[0][0] = 'h';
	strs[0][1] = 'o';
	strs[0][2] = 'l';
	strs[0][3] = 'a';
	strs[0][4] = '\0';
	strs[1] = malloc(sizeof(char *) * 4);
	strs[1][0] = 'q';
	strs[1][1] = 'u';
	strs[1][2] = 'e';
	strs[1][3] = '\0';
	strs[2] = malloc(sizeof(char *) * 4);
	strs[2][0] = 't';
	strs[2][1] = 'a';
	strs[2][2] = 'l';
	strs[2][3] = '\0';
	strs[3] = malloc(sizeof(char *) * 3);
	strs[3][0] = 't';
	strs[3][1] = 'e';
	strs[3][2] = '\0';
	strs[4] = malloc(sizeof(char *) * 3);
	strs[4][0] = 'v';
	strs[4][1] = 'a';
	strs[4][2] = '\0';
	size = 5;
	sep = "-|_|-";

	printf("\nLa frase a concatenar es: ");
	int	ii;

	ii = -1;
	while (strs[++ii])
		printf("%s ", strs[ii]);
	
	printf("\nLos separadores son: \"%s\"\n", sep);
	dest_ = ft_strjoin(size, strs, sep);
	printf("\nEl resultado es: %s\n", dest_);


	strs = malloc(sizeof(char **) * 1);
	strs[0] = '\0';	
	size = 0;
	printf("\nLa frase a concatenar es: ");
	printf("%s ", strs[0]);
	
	printf("\nLos separadores son: \"%s\"\n", sep);
	dest_ = ft_strjoin(size, strs, sep);

	printf("\nEl resultado es: %s\n", dest_);
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
