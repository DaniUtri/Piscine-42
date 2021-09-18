#include "ex00/ft_strcpy.c"
#include "ex01/ft_strncpy.c"
#include "ex02/ft_str_is_alpha.c"
#include "ex03/ft_str_is_numeric.c"
#include "ex04/ft_str_is_lowercase.c"
#include "ex05/ft_str_is_uppercase.c"
//#include "ex06/ft_str_is_printable.c"
//#include "ex07/ft_strupcase.c"
//#include "ex08/ft_strlowcase.c"
#include "ex09/ft_strcapitalize.c"
#include "ex10/ft_strlcpy.c"
#include "ex11/ft_putstr_non_printable.c"
#include <string.h>
#include <stdio.h>


char *ft_strcpy(char *dest, char *src);
char *ft_strncpy(char *dest, char *src, unsigned int n);
int ft_str_is_alpha(char *str);
int ft_str_is_numeric(char *str);
int ft_str_is_lowercase(char *str);
int ft_str_is_uppercase(char *str);
int ft_str_is_printable(char *str);
char *ft_strupcase(char *str);
char *ft_strlowcase(char *str);
void ft_putstr_non_printable(char *str);
unsigned int ft_strlcpy(char *dest, char *src, unsigned int size);

#include <unistd.h>
char *ft_strcapitalize(char *str);

int main (void)
{
///*
	//ex00
/*	
	char s[] = "Hello";
	char *src;
	char d[] = "eefvfefbrfbgrg";
	char *dest;
	int counter;

	src = s;
	dest = d;
	counter = 0;
	
	while (dest[counter] != '\0')
	{
		write(1, &dest[counter], 1);
		counter++;
	}
	
	
counter = 0;
	printf("Source: %s\n", &*src );
	printf("Destination: %s\n", dest);
	ft_strcpy(dest, src);
	printf("After copying:\n");
	printf("Destination: %s\n", dest );
*/
	
	/*
	while (dest[counter])
	{
		write(1, &dest[counter], 1);
		counter++;
	}
	*/
/*	
	
	char s[] = "Hello";
	char *src;
	char d[] = "eefvfefbrfbgrg";
	char *dest;
	int counter;

	src = s;
	dest = d;
	counter = 0;	

	counter = 0;
	printf("Source: %s\n", &*src );
	printf("Destination: %s\n", dest);
	strcpy(dest, src);
	printf("After copying:\n");
	printf("Destination: %s\n", dest );

*/
	
//*
//ex01

	char *src = "abc";
	char *dest = "";
	unsigned int n;

	n = 5;
	printf("Original char *: %s", src);
	//ft_strncpy(dest, src, n);
	printf("\nn = 5 -> %s", dest);
	strncpy(dest, src, n);
	printf("\n====\nOriginal char *: %s\nn = 5 -> %s", src, dest);
	printf("\n");
	



	char *src_ = "abc";
	char *dest_ = "";

	printf("src: %s\n", src_);
	printf("dest: %s\n", dest_);
	//ft_strncpy(dest_, src_, 5);
	printf("Copiamos solo n caracteres -> ");
	printf("dest: %s\n", dest_);

/*
	//ex02

	char *str;
	int result;

	result = 0;

	str = "HeLhol";
	result = ft_str_is_alpha(str);
	printf("\n%s is alpha? -> %i\n", str, result);
	str = "as!?af0";
	result = ft_str_is_alpha(str);
	printf("\n%s is alpha? -> %i\n", str, result);
	str = "2356a235ia";
	result = ft_str_is_alpha(str);
	printf("\n%s is alpha? -> %i\n", str, result);
	str = "\0";
	result = ft_str_is_alpha(str);
	printf("\n%s is alpha? -> %i\n", str, result);
	str = "@";
	result = ft_str_is_alpha(str);
	printf("\n%s is alpha? -> %i\n", str, result);
	str = "[";
	result = ft_str_is_alpha(str);
	printf("\n%s is alpha? -> %i\n", str, result);
	str = "`";
	result = ft_str_is_alpha(str);
	printf("\n%s is alpha? -> %i\n", str, result);
	str = "{";
	result = ft_str_is_alpha(str);
	printf("\n%s is alpha? -> %i\n", str, result);
	//*/
/*
	char *str;
	int result;

	result = 0;
	str = "0123456";
	result = ft_str_is_numeric(str);
	printf("\n%s is numeric? -> %i\n", str, result);
	str = "01ia45b6";
	result = ft_str_is_numeric(str);
	printf("\n%s is numeric? -> %i\n", str, result);
	str = "0";
	result = ft_str_is_numeric(str);
	printf("\n%s is numeric? -> %i\n", str, result);
	str = "9";
	result = ft_str_is_numeric(str);
	printf("\n%s is numeric? -> %i\n", str, result);
	str = "/";
	result = ft_str_is_numeric(str);
	printf("\n%s is numeric? -> %i\n", str, result);
	str = ":";
	result = ft_str_is_numeric(str);
	printf("\n%s is numeric? -> %i\n", str, result);
	str = "";
	result = ft_str_is_numeric(str);
	printf("\n%s is numeric? -> %i\n", str, result);

*/


//ex04
/*
	char *str;
	int result;

	result = 0;

	str = "asfhfadgasfdsa";
	result = ft_str_is_lowercase(str);
	printf("\n%s is lowercase? -> %i\n", str, result);

	str = "dfaAfdaf";
	result = ft_str_is_lowercase(str);
	printf("\n%s is lowercase? -> %i\n", str, result);

	str = "FASDFASF";
	result = ft_str_is_lowercase(str);
	printf("\n%s is lowercase? -> %i\n", str, result);

	str="as0f5j9d5hl";
	result = ft_str_is_lowercase(str);
	printf("\n%s is lowercase? -> %i\n", str, result);

	str="`";
	result = ft_str_is_lowercase(str);
	printf("\n%s is lowercase? -> %i\n", str, result);

	str="{";
	result = ft_str_is_lowercase(str);
	printf("\n%s is lowercase? -> %i\n", str, result);
	str="";
	result = ft_str_is_lowercase(str);
	printf("\n%s is lowercase? -> %i\n", str, result);

*/
//ex05
//
/*
	char *str;
	int result;

	result = 0;

	str = "FASDFASF";
	result = ft_str_is_uppercase(str);
	printf("\n%s is uppercase? -> %i\n", str, result);
	str="as0f5j9d5hl";
	result = ft_str_is_uppercase(str);
	printf("\n%s is uppercase? -> %i\n", str, result);
	str = "FADsffasdfasdfSF";
	result = ft_str_is_uppercase(str);
	printf("\n%s is uppercase? -> %i\n", str, result);
	str = "@";
	result = ft_str_is_uppercase(str);
	printf("\n%s is uppercase? -> %i\n", str, result);
	str = "[";
	result = ft_str_is_uppercase(str);
	printf("\n%s is uppercase? -> %i\n", str, result);

	str = "";
	result = ft_str_is_uppercase(str);
	printf("\n%s is uppercase? -> %i\n", str, result);
*/

//ex06
/*
	char *str;
	char result;
	char s[10];
	result = 0;
	str = s;


	str = "";
	ft_str_is_printable(str);
	result = ft_str_is_printable(str);
	printf("\n%s is printable? -> %i\n", str, result);


	str = "aáésdfasfa";
	result = ft_str_is_printable(str);
	printf("\n%s is printable? -> %i\n", str, result);

	str = "1234basdf";
	result = ft_str_is_printable(str);
	printf("\n%s is printable? -> %i\n", str, result);
*/

//ex07
/*

	char str[] = "hhh";
	char str1[] = "TkMfasdfadINF asdfa asdfa**";

	printf("%s se convierte en ", str);
	printf("%s", ft_strupcase(str));
	printf("\n");
	printf("%s se convierte en ", str1);
	printf("%s", ft_strupcase(str1));

//ex08
	char str[] = "HHHhhhh";
	char str1[] = "TkMfasdfadINF asdfa asdfa**";

	printf("%s se convierte en ", str);
	printf("%s", ft_strlowcase(str));
	printf("\n");
	printf("%s se convierte en ", str1);
	printf("%s", ft_strlowcase(str1));

*/

//ex09

/*

	char s[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	char p[] = "hOadfaf 341jfasJ3j HafLfasdfads kkAlllA";


	printf("%s\n", ft_strcapitalize(s));

	printf("%s\n", ft_strcapitalize(p));
*/

//ex10
//
/*
	char *src = "Hola, Pepe";
	char dest[14];
	int counter;
	unsigned int p;

//	char dest2[13];

	counter = 0;
	p = strlcpy(dest, src, 14);
	printf("%s\n", src);
	printf("Original strlcpy, size 14: return %u and dest %s", p, dest);
	counter = 0;
	p = strlcpy(dest, src, 13);
	printf("\nOriginal strlcpy, size 13: return %u and dest %s", p, dest);
	counter = 0;
	p = strlcpy(dest, src, 5);
	printf("\nOriginal strlcpy, size 5: return %u and dest %s", p, dest);
	counter = 0;

	printf("\n=================\n");

	p = ft_strlcpy(dest, src, 14);
	printf("\nFalse strlcpy, size 14: return %u and dest %s", p, dest);
	counter = 0;

	p = ft_strlcpy(dest, src, 13);
	printf("\nFalse strlcpy, size 13: return %u and dest %s", p, dest);
	counter = 0;

	p = ft_strlcpy(dest, src, 5);
	printf("\nFalse strlcpy, size 5: return %u and dest %s", p, dest);
	counter = 0;

*/

//ex11
/*
	char *str4 = "Coucou\ntu vas bien ?";
	ft_putstr_non_printable(str4);
	printf("\n");
	char *str = "Coucou\ttu vas bien ?";
	ft_putstr_non_printable(str);
	printf("\n");
	char *str2 = "Coucou\vtu vas bien ?";
	ft_putstr_non_printable(str2);
	printf("\n");
	char *str3 = "Coucou\177tu vas bien ?";
	ft_putstr_non_printable(str3);
	printf("\n");

*/

}
