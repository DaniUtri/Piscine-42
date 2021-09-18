#include <stdio.h>
#include "ex00/ft_strcpy.c"
#include "ex01/ft_strncpy.c"
#include "ex02/ft_str_is_alpha.c"
#include "ex03/ft_str_is_numeric.c"
#include "ex04/ft_str_is_lowercase.c"
#include "ex05/ft_str_is_uppercase.c"
#include "ex06/ft_str_is_printable.c"
#include "ex07/ft_strupcase.c"
#include "ex08/ft_strlowcase.c"
#include "ex09/ft_strcapitalize.c"
#include "ex10/ft_strlcpy.c"
#include "ex11/ft_putstr_non_printable.c"
#include "ex12/ft_print_memory.c"
#include <string.h>

int main(void)
{
	// ex00
	/*
	char str1[] = "hola mundo";
	char str2[] = "HOLA MUNDO";

	printf("src: %s\n", str1);
	printf("dest: %s", str2);
	ft_strcpy(str2, str1);
	printf("\tReasignamos -> ");
	printf("dest: %s\n", str2);
	*/

	//ex01
	/*
	printf("\n");
	printf("ex01");
	printf("\n");
	printf("\n**********\n");
	printf("Prueba 1");
	printf("\n**********\n");
	char str1[] = "HUGO MI REY";
	char str1_[] = "HUGO MI REY";
	char str2[] = "HOLA";
	char str2_[] = "HOLA";

	printf("src: %s\n", str1);
	printf("dest: %s\n", str2);
	ft_strncpy(str2, str1, 4);
	printf("Copiamos solo n caracteres -> ");
	printf("dest: %s\n", str2);
	printf("\n");
	strncpy(str2_, str1_, 4);
	printf("Resultado de la función original: %s\n", str2_);

	printf("\n");
	printf("\n");
	printf("\n**********\n");
	printf("Prueba 2");
	printf("\n**********\n");
	char str[] = "hola amigo";
	char str_[] = "hola amigo";
	char str3[] = "ALOH";
	char str3_[] = "ALOH";

	printf("dest: %s\n", str);
	printf("src: %s\n", str3);
	ft_strncpy(str, str3, 4);
	printf("Copiamos solo n caracteres -> ");
	printf("dest: %s\n", str);
	printf("\n");
	strncpy(str_, str3_, 4);
	printf("Resultado de la función original: %s\n", str_);

	printf("\n");
	printf("\n");
	printf("\n**********\n");
	printf("Prueba 3");
	printf("\n**********\n");
	char str_90[] = "hugo";
	char str3_90[] = "HOL";

	printf("src: %s\n", str_);
	printf("dest: %s\n", str3_);
	strncpy(str3_90, str_90, 4);
	printf("Copiamos solo n caracteres -> ");
	printf("dest: %s\n", str3_90);
	printf("\n");
	printf("Resultado de la función original: %s\n", strncpy(str3_90, str_90, 4));

*/
	//ex02
	/*
	char	str1[] = "Alfabeto";
	char	str2[] = "42";
	char	str3[] = "Hola 42";
	char	str4[] = "Hola ";
	char	str5[] = "Hola";
	char	str6[] = "";

	printf("Solo caracter alfabeticos: %i\n", ft_str_is_alpha(str1));
	printf("Solo caracter NO alfabeticos: %i\n", ft_str_is_alpha(str2));
	printf("Caracter NO alfabeticos y alfabeticos: %i\n", ft_str_is_alpha(str3));
	printf("Caracter NO alfabeticos y alfabeticos: %i\n", ft_str_is_alpha(str4));
	printf("Solo caracter alfabeticos: %i\n", ft_str_is_alpha(str5));
	printf("Sin caracteres: %i\n", ft_str_is_alpha(str6));
	*/

	//ex03
/*
	char	str1[] = "Alfabeto";
	char	str2[] = "42";
	char	str3[] = "Hola 42";
	char	str4[] = "Hola ";
	char	str5[] = "Hola";
	char	str6[] = "234";
	char	str7[] = "";

	printf("Solo caracter alfabeticos: %i\n", ft_str_is_numeric(str1));
	printf("Solo numeros: %i\n", ft_str_is_numeric(str2));
	printf("Caracter NO alfabeticos y alfabeticos: %i\n", ft_str_is_numeric(str3));
	printf("Caracter NO alfabeticos y alfabeticos: %i\n", ft_str_is_numeric(str4));
	printf("Solo caracter alfabeticos: %i\n", ft_str_is_numeric(str5));
	printf("Solo numeros: %i\n", ft_str_is_numeric(str6));
	printf("Sin caracteres: %i\n", ft_str_is_numeric(str7));
	*/

	//ex04
	/*
	char	str1[] = "alfabeto";
	char	str2[] = "42";
	char	str3[] = "HOLA";
	char	str4[] = "!! ";
	char	str5[] = "Hola";
	
	printf("Solo minuscula: %i\n", ft_str_is_lowercase(str1));
	printf("NO minuscula: %i\n", ft_str_is_lowercase(str2));
	printf("NO minuscula: %i\n", ft_str_is_lowercase(str3));
	printf("NO minuscula: %i\n", ft_str_is_lowercase(str4));
	printf("NO minuscula: %i\n", ft_str_is_lowercase(str5));
	*/

	//ex05
	/*
	char	str1[] = "alfabeto";
	char	str2[] = "42";
	char	str3[] = "HOLA";
	char	str4[] = "!! ";
	char	str5[] = "Hola";
	
	printf("Solo minuscula: %i\n", ft_str_is_uppercase(str1));
	printf("NO mayuscula: %i\n", ft_str_is_uppercase(str2));
	printf("Solo mayuscula: %i\n", ft_str_is_uppercase(str3));
	printf("NO mayuscula: %i\n", ft_str_is_uppercase(str4));
	printf("NO solo mayuscula: %i\n", ft_str_is_uppercase(str5));
	*/

	//ex06
	/*
	char	str1[] = "! ";
	char	str2[] = "à";
	char	str3[] = "69á";

	printf("Imprimible: %i\n", ft_str_is_printable(str1));
	printf("NO Imprimible: %i\n", ft_str_is_printable(str2));
	printf("Imprimible y NO: %i\n", ft_str_is_printable(str3));
	*/

	//ex07
	/*
	char	str1[] = "fF,y?m2[Z2$fF,y?m2[Z2$    ($$";
	char	str1_[] = "abcdefghijklmnopqrstuvwxyz";
	char	str2[] = "90 hola";
	char	str3[] = "69á";

	printf("Minusculas: %s", str1_);
	ft_strupcase(str1_);
	printf(" -> Mayusculas: %s\n", str1_);
	printf("Minusculas: %s", str1);
	ft_strupcase(str1);
	printf(" -> Mayusculas: %s\n", str1);
	printf("Minusculas: %s", str2);
	ft_strupcase(str2);
	printf(" -> Mayusculas: %s\n", str2);
	printf("Minusculas: %s", str3);
	ft_strupcase(str3);
	printf(" -> Mayusculas: %s\n", str3);
	*/
	
	//ex08
	/*
	char	str1[] = "XTi~1";
	char	str1_[] = "ABCDEFGHIJKLMNOPQRSTuVWxYZ";
	char	str2[] = "90 hoLa";
	char	str3[] = "69á";

	printf("Mayusculas: %s", str1_);
	ft_strlowcase(str1_);
	printf(" -> Minusculas: %s\n", str1_);
	printf("Mayusculas: %s", str1);
	ft_strlowcase(str1);
	printf(" -> Minusculas: %s\n", str1);
	printf("Mayusculas: %s", str2);
	ft_strlowcase(str2);
	printf(" -> Minusculas: %s\n", str2);
	printf("Mayusculas: %s", str3);
	ft_strlowcase(str3);
	printf(" -> Minusculas: %s\n", str3);
	*/

	//ex09
	/*
	char	str1_[] = "salut,  comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	char	str2[] = "8hol, no me digas nada. solo iMprime bien";

	printf("Original: %s", str1_);
	ft_strcapitalize(str1_);
	printf("\n -> Modificado: %s\n", str1_);
	printf("Original: %s", str2);
	ft_strcapitalize(str2);
	printf("\n -> Modificado: %s\n", str2);

	char	str28[] = "xX#'qFAF_kEFql|";
	char	str28_[] = "~&hqchphaw1.<r8 w&$8w>^e*2seo}k=(!'";
	char	str29[] = "-4b.[S&=$3{!/7@ybsjyzji$";
	char	str30[] = "DGqxGx(NbPz;5Voolqa:jIVxFaD0D^,P";
	
	ft_strcapitalize(str28);
	printf("\n\n Resultado: %s\n", str28);
	printf("Esperado   : Xx#'Qfaf_Kefql|");
	ft_strcapitalize(str28_);
	printf("\n\n Resultado: %s\n", str28_);
	printf("Esperado   : ~&Hqchphaw1.<R8 W&$8w>^E*2seo}K=(!'");
	ft_strcapitalize(str29);
	printf("\n\n Resultado: %s\n", str29);
	printf("Esperado   : -4b.[S&=$3{!/7@Ybsjyzji$");
	ft_strcapitalize(str30);
	printf("\n\n Resultado: %s\n", str30);
	printf("Esperado   : Dgqxgx(Nbpz;5voolqa:Jivxfad0d^,P");


*/
	//printf("\nEscribe: %c, Es: %i", str28[3], ft_lower(&str28[3]));

	//ex10
	///*
	char str1[] = "hola_mundo1";
	char str1_[] = "hola_mundo1";
	char str1__[] = "hola_mundo1";
	char str1__1[] = "hola_mundo1";
	char str1__12[] = "hola_mundo1";
	char str1__12i[] = "hola_mundo1";
	char str1__12i_[] = "hola_mundo1";
	char str1__12_[] = "hola_mundo1";
	char str1__12_i[] = "hola_mundo1";
	char str1__12_i_[] = "hola_mundo1";
	char str2[] = "HOLA MUNDO";
	char str2_[] = "HOLA MUNDO";
	char str2__[] = "HOLA MUNDO";
	char str2__1[] = "HOLA MUNDO";
	char str2__12[] = "HOLA MUNDO";
	char str2__12i[] = "HOLA MUNDO";
	char str2__12i_[] = "HOLA";
	char str2__12_[] = "HOLA MUNDO";
	char str2__12_i[] = "HOLA MUNDO";
	char str2__12_i_[] = "HOLA";
	int	l;
	int	l_;
	
	printf("\n");
	printf("src: %s\n", str1);
	printf("dest: %s\n", str2);
	l = ft_strlcpy(str2, str1, 8);
	printf("\n========");
	printf("\nPrueba 1\n");
	printf("========\n");
	printf("\nPrueba 1\n");
	printf("\nCopiamos solo 8 caracteres -> ");
	printf("dest: %s\n", str2);
	printf("La longitud del destino es: %i\n", l);
	printf("\nFUNCION ORIGINAL\n");
	l_ = strlcpy(str2_, str1_, 8);
	printf("Copiamos solo 8 caracteres -> ");
	printf("dest: %s\n", str2_);
	printf("La longitud del destino es: %i\n", l_);
	printf("\n=======");
	printf("\nPrueba extra\n");
	printf("========\n");
	l = ft_strlcpy(str2__, str1__, 0);
	printf("Copiamos solo 0 caracteres -> ");
	printf("dest: %s\n", str2__);
	printf("La longitud del destino es: %i\n", l);
	printf("\nFUNCION ORIGINAL\n");
	l_ = strlcpy(str2__1, str1__1, 0);
	printf("Copiamos solo 0 caracteres -> ");
	printf("dest: %s\n", str2__1);
	printf("La longitud del destino es: %i\n\n", l_);

	printf("\n=======");
	printf("\nPrueba extra 2\n");
	printf("========\n");
	l = ft_strlcpy(str2__12, str1__12, 1);
	printf("Copiamos solo 1 caracteres -> ");
	printf("dest: %s\n", str2__12);
	printf("La longitud del destino es: %i\n", l);
	printf("\nFUNCION ORIGINAL\n");
	l_ = strlcpy(str2__12_, str1__12_,1);
	printf("Copiamos solo 1 caracteres -> ");
	printf("dest: %s\n", str2__12_);
	printf("La longitud del destino es: %i\n\n", l_);

	printf("\n=======");
	printf("\nPrueba extra 3\n");
	printf("========\n");
	l = ft_strlcpy(str2__12i, str1__12i, 3);
	printf("Copiamos solo 3 caracteres -> ");
	printf("dest: %s\n", str2__12i);
	printf("La longitud del destino es: %i\n", l);
	printf("\nFUNCION ORIGINAL\n");
	l_ = strlcpy(str2__12_i, str1__12_i, 3);
	printf("Copiamos solo 3 caracteres -> ");
	printf("dest: %s\n", str2__12_i);
	printf("La longitud del destino es: %i\n\n", l_);

	printf("\n=======");
	printf("\nPrueba extra 4\n");
	printf("========\n");
	l = ft_strlcpy(str2__12i_, str1__12i_, 5);
	printf("Copiamos solo 4 caracteres -> ");
	printf("dest: %s\n", str2__12i_);
	printf("La longitud del destino es: %i\n", l);
	printf("\nFUNCION ORIGINAL\n");
	l_ = strlcpy(str2__12_i_, str1__12_i_, 5);
	printf("Copiamos solo 4 caracteres -> ");
	printf("dest: %s\n", str2__12_i_);
	printf("La longitud del destino es: %i\n\n", l_);




	
	

	//*/

	//ex11
	/*
	char	str[] = "Coucou\x7ftu vas bien ?";
	char	str2[] = "Coucou\ntu vas bien ?";
	char	str3[] = "Coucou\1tu vas bien ?";
	char	str4[] = "Coucou\213tu vas bien ?";
	char	str5[] = "Coucou\255tu vas bien ?";

	//printf("Original: %s\n", str);
	ft_putstr_non_printable(str);
	write(1, "\nEsperado: Coucou\\7ftu vas bien ?\n", 34);
	write(1, "\n", 1);
	//printf("\n");
	ft_putstr_non_printable(str2);
	write(1, "\nEsperado: Coucou\\0atu vas bien ?\n", 34);
	//printf("\n");
	write(1, "\n", 1);
	ft_putstr_non_printable(str3);
	write(1, "\nEsperado: Coucou\\01tu vas bien ?\n", 34);
	write(1, "\n", 1);
	ft_putstr_non_printable(str4);
	write(1, "\nEsperado: Coucou\\8btu vas bien ?\n", 34);
	write(1, "\n", 1);
	ft_putstr_non_printable(str5);
	write(1, "\nEsperado: Coucou\\adtu vas bien ?\n", 34);


	*/

	//ex12
	/*
	char	tab[] = "Bonjour les amin";
	unsigned int	i;
	void	*a;

	i = 16;

	a = ft_print_memory(tab, 16);
	//printf("\n");
	//printf("%p", a);
	*/
}
