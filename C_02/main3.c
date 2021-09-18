#include "ex00/ft_strcpy.c"
#include "ex01/ft_strncpy.c"
#include "ex02/ft_str_is_alpha.c"
//#include "ex03/ft_str_is_numeric.c"
//#include "ex04/ft_str_is_lowercase.c"
//#include "ex05/ft_str_is_uppercase.c"
//#include "ex06/ft_str_is_printable.c"
//#include "ex07/ft_strupcase.c"
//#include "ex08/ft_strlowcase.c"
//#include "ex09/ft_strcapitalize.c"
#include "ex10/ft_strlcpy.c"
#include "ex11/ft_putstr_non_printable.c"

#include <stdio.h>
#include <unistd.h>
#include <string.h>

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

char *ft_strcapitalize(char *str);

int main (void)
{

	//ex00
/*
	char s[] = "Hello";
	char *src;
	char d[] = "eefvfefbrfbgrg";
	char *dest;
	char *newd;
	char n[] = "gadfbnanavandsañf";


	newd = n;
	src = s;
	dest = d;
	printf("False strcpy\n\nSource: %s\n", &*src );
	printf("Destination: %s\n", dest);
	dest = ft_strcpy(dest, src);
	printf("After copying:\n");
	printf("Destination: %s\n", dest);

	printf("\n===============\nOriginal strcpy\n\n");
	printf("Source: %s\n", src );
	printf("Destination: %s\n", newd);
	newd = strcpy(newd, src);
	printf("After copying:\n");
	printf("Destination: %s", newd);

*/


//ex01
///*
	char source[9] = "hola";
	char destination[] = "HOLA MUNDO";
	char *dest;
	char *src;
	unsigned int n;
	unsigned int counter;

//	destination ="HOLA MU";
	counter = 0;
	src = source;
	n = 5;
	dest = destination;

	printf("=================\nFalse strncpy\n================\n");
	printf("Original char *: %s", src);
	dest = ft_strncpy(dest, src, n);
	printf("\nn = 5 -> %s", dest);
	src = "abc";
	dest = ft_strncpy(dest, src, n);
	printf("\n====\nOriginal char *: %s\nn = 5 -> %s", src, dest);
	printf("\n");
	while (counter < n)
	{
		printf("%c", dest[counter]);
		counter++;
	}

	printf("\n\n=================\nReal strncpy\n================\n");

	counter = 0;
	src = "hola";
	printf("Original char *: %s", src);
	dest = strncpy(dest, src, n);
	printf("\nn = 5 -> %s", dest);
	src = "abc";
	dest = strncpy(dest, src, n);
	printf("\n====\nOriginal char *: %s\nn = 5 -> %s", src, dest);
	printf("\n");
/*
	while (counter < n//)
	{
		printf("%c", dest[counter]);
		counter++;
	}

*/

//*/
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
*/
/*

//ex03

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
	printf("is \n%s (empty) printable? -> %i\n", str, result);


	str = "aáésdfasfa";
	result = ft_str_is_printable(str);
	printf("is \n%s printable? -> %i\n", str, result);

	str = "1234bas df";
	result = ft_str_is_printable(str);
	printf("is \n%s printable? -> %i\n", str, result);

	str = " ";
	result = ft_str_is_printable(str);
	printf("is \n%s (space) printable? -> %i\n", str, result);


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
	char p[] = "hOadfaf 341JfasJ3j HafLfasdfads kkAlllA";
	char j2[] = "&G*7@[@Xqfs72dvnfd/Ex]*9dc;Q`)";
	char j[] = "&g*7@[@XQfs72dvnfd/Ex]*9dc;q`)";
	char h2[] = "Nc     Hcvy)#I5zx,V}:R}+ ";
	char h[] = "NC     Hcvy)#I5zx,v}:R}+ ";
	char i2[] = "Tnz+W^*=Qpylsb-Akx$<B:J($8qooi=Qrl>)2 ";
	char i[] = "TNz+W^*=Qpylsb-AKx$<b:J($8qooi=Qrl>)2 ";
	char k2[] = "=Wfc@G,A$J_R##*U/5vn7*K7'`M2kyn|.7n7`J|C";
	char k[] = "=Wfc@g,a$J_R##*U/5vn7*K7'`M2kyn|.7n7`j|C";
	char k3[] = "=WFC@G,A$J_R##*U/5VN7*K7'`M2KYN|.7N7`J|C";
	char k4[] = "=wfc@g,a$j_r##*u/5vn7*k7'`m2kyn|.7n7`j|c";
	char m2[] = "Null";
	char m[] = "NUll";

	printf("%s\n", ft_strcapitalize(s));

	printf("%s\n", ft_strcapitalize(p));


	printf("%s <- Desired output\n", j2);
	printf("%s <- Function output\n", ft_strcapitalize(j));
	printf("diff? %i \n\n", strncmp(j, j2, sizeof(j)));

	printf("%s <- Desired output\n", h2);
	printf("%s <- Function output\n", ft_strcapitalize(h));
	printf("diff? %i \n", strncmp(h, h2, sizeof(h)));

	printf("Tnz+W^*=Qpylsb-Akx$<B:J($8qooi=Qrl>)2 <- Desired output\n");
	printf("%s <- Function output\n", ft_strcapitalize(i));
	printf("diff? %i \n", strncmp(i, i2, sizeof(i)));

	printf("%s <- Desired output\n", k2);
	printf("%s <- Function output\n", ft_strcapitalize(k));
	printf("diff? %i \n", strncmp(k, k2, sizeof(k)));

	printf("%s <- Desired output\n", k2);
	printf("%s <- Function output\n", ft_strcapitalize(k3));
	printf("diff? %i \n", strncmp(k3, k2, sizeof(k)));

	printf("%s <- Desired output\n", m2);
	printf("%s <- Function output\n", ft_strcapitalize(m));
	printf("diff? %i \n", strncmp(m, m2, sizeof(m)));

	printf("%s <- Desired output\n", k2);
	printf("%s <- Function output\n", ft_strcapitalize(k4));
	printf("diff? %i \n", strncmp(k4, k2, sizeof(k)));
*/
//ex10
//
/*
	char *src = "19oswnFyTkFuvmP";
	char dest[12];
	int counter;
	unsigned int p;

//	char dest2[13];

	counter = 0;
	p = strlcpy(dest, src, 12);
	printf("%s\n", src);
	printf("Original strlcpy, size 14: return %u and dest %s", p, dest);
	counter = 0;
	p = strlcpy(dest, src, 11);
	printf("\nOriginal strlcpy, size 13: return %u and dest %s", p, dest);
	counter = 0;
	p = strlcpy(dest, src, 10);
	printf("\nOriginal strlcpy, size 5: return %u and dest %s", p, dest);
	counter = 0;



	printf("\n=================\n");

	p = ft_strlcpy(dest, src, 12);
	printf("\nFalse strlcpy, size 14: return %u and dest %s", p, dest);
	counter = 0;

	p = ft_strlcpy(dest, src, 11);
	printf("\nFalse strlcpy, size 13: return %u and dest %s", p, dest);
	counter = 0;

	p = ft_strlcpy(dest, src, 10);
	printf("\nFalse strlcpy, size 5: return %u and dest %s", p, dest);
	counter = 0;
*/


//ex11
/*

	char *str4 = "Coucou\ntu vas bien ?";
	ft_putstr_non_printable(str4);
	printf("\n");
	char *str = "Coucou\011tu vas bien ?";
	ft_putstr_non_printable(str);
	printf("\n");
	char *str2 = "Coucou\vtu vas bien ?";
	ft_putstr_non_printable(str2);
	printf("\n");
	char *str3 = "Coucou\2tu vas bien ?";
	ft_putstr_non_printable(str3);
	printf("\n");
	char *str5 = "Coucou\177tu vas bien ?";
	ft_putstr_non_printable(str5);
	printf("\n");

	int		size;
	char	*hex;

	hex = "0123456789abcdef";
	size = 0;

	char i = 0;
	while (i < 127)
	{
		if (i < 32 || i > 126)
		{
			write(1, "\\", 1);
			write(1, &hex[(i / 16) % 16], 1);
			write(1, &hex[i % 16], 1);
		}
		else
			write(1, &i, 1);

	//	printf(", %i", i);
		i++;

	}
//	write(1, &i, 1);
*/
}
