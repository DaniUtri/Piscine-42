#include <stdio.h>
#include "ex00/ft_strlen.c"
#include "ex01/ft_putstr.c"
#include "ex02/ft_putnbr.c"
#include "ex03/ft_atoi.c"
#include "ex04/ft_putnbr_base.c"
#include <limits.h>
#include <stdlib.h>

int	main(void)
{
	ft_putstr("\n**********\n");
	ft_putstr("ex00: ft_strlen");
	ft_putstr("\n**********\n");
	ft_putstr("\nPruebas:\n");
	char	c[] = "Hola";
	char	c_;
	char c1_;
	char	c1[] = "";
	ft_putstr("La longitud de ");
	ft_putstr(c);
	ft_putstr(" es: ");
	c_ = ft_strlen(c) + 48;
	write(1, &c_, 1);
	ft_putstr("\n");
	ft_putstr("La longitud de \"\"");
	ft_putstr(c1);
	ft_putstr(" es: ");
	c1_ = ft_strlen(c1) + 48;
	write(1, &c1_, 1);
	ft_putstr("\n");

	ft_putstr("\n**********\n");
	ft_putstr("ex01: ft_putstr");
	ft_putstr("\n**********\n");
	ft_putstr("\nPruebas:\n");
	ft_putstr("Imprime: Hola mundo");
	ft_putstr("\n");
	ft_putstr("");
	ft_putstr("Imprime: No");

	ft_putstr("\n");
	ft_putstr("\n**********\n");
	ft_putstr("ex02: ft_putnbr");
	ft_putstr("\n**********\n");
	ft_putstr("\nPruebas:\n");
	ft_putstr("Escribe el número: -121474836\n");
	ft_putnbr(-121474836);
	ft_putstr("\n");
	ft_putstr("Escribe el número: 0\n");
	ft_putnbr(0);
	ft_putstr("\n");
	ft_putstr("Escribe el número: 2147483647\n");
	ft_putnbr(2147483647);
	ft_putstr("\n");
	ft_putstr("Escribe el número: -2147483648\n");
	ft_putnbr(-2147483648);
	ft_putstr("\n");
	ft_putstr("Escribe el número: -21\n");
	ft_putnbr(-21);
	ft_putstr("\n");
	ft_putstr("Escribe el número: -12\n");
	ft_putnbr(-12);
	ft_putstr("\n");
	ft_putstr("Escribe el número: -2\n");
	ft_putnbr(-2);
	ft_putstr("\n");
	ft_putstr("Escribe el número: 1\n");
	ft_putnbr(1);
	ft_putstr("\n");
	ft_putstr("Escribe el número: -1\n");
	ft_putnbr(-1);




	ft_putstr("\n");
	ft_putstr("\n**********\n");
	ft_putstr("ex03: ft_atoi");
	ft_putstr("\n**********\n");
	ft_putstr("\nPruebas:\n");
	ft_putstr("\nEscribe el número:  \t-+--2147483648 con ft_atoi\n");
	int	cc;
	cc = ft_atoi("  \t-+--2147483648");
	ft_putnbr(cc);
	ft_putstr("\nEl resultado del string -2147483648 con la función original es:\n");
    ft_putnbr(atoi("-2147483648"));
	ft_putstr("\n"); 
	ft_putstr("\nEscribe el número:   --+--+2147483647 con ft_atoi\n");
	int	cc_;
	cc_ = ft_atoi("  --+--+2147483647");
	ft_putnbr(cc_);
	ft_putstr("\nEl resultado del string 2147483647 con la función original es:\n");
    ft_putnbr(atoi("2147483647"));
	ft_putstr("\n");   
	int	cc__;
	cc__ = ft_atoi(" +--0");
	ft_putstr("\nEscribe el número: +--0 con ft_atoi\n");
	ft_putnbr(cc__);
	ft_putstr("\nEl resultado del string 0 con la función original es:\n");
    ft_putnbr(atoi("0"));
	ft_putstr("\n");
	int	cc__1;
	cc__1 = ft_atoi(" +-- -+457hoña0");
	ft_putstr("\nEscribe el número:  +-- -+457hoña con ft_atoi\n");
	ft_putnbr(cc__1);
	ft_putstr("\n");
	ft_putstr("\nEl resultado del string   +-- -+457hoña con la función original es:\n");
    ft_putnbr(atoi("  +-- -+457hoña"));
	ft_putstr("\n");

	ft_putstr("\nEl resultado del string   +-- -+457hoña con la función original es:\n");
    ft_putnbr(atoi("  +-- -+457hoña"));
	ft_putstr("\n");

	int	cc__1_;
	cc__1_ = ft_atoi(" -1325632167");
	ft_putstr("\nEscribe el número:  -1325632167 con ft_atoi\n");
	ft_putnbr(cc__1_);
	ft_putstr("\n");

	ft_putstr("\nEl resultado del string   +-1325632167 con la función original es:\n");
    ft_putnbr(atoi(" -1325632167"));
	ft_putstr("\n");



	ft_putstr("\n");
	ft_putstr("\n**********\n");
	ft_putstr("ex04: ft_putnbr_base");
	ft_putstr("\n**********\n");
	ft_putstr("\nPruebas:\n");
	int	num;
	char	*base;
	num = -79;
	base = "01";
	ft_putstr("\nConvierte el número -79 en base binaria:\n");
	ft_putnbr_base(num, base);
	ft_putstr("\n");
	int	num_;
	num_ = 48596;
	ft_putstr("\nConvierte el número 48596 en base binaria:\n");
	ft_putnbr_base(num_, base);
	ft_putstr("\n");
	int	num_x;
	num_x = 0;
	ft_putstr("\nConvierte el número 0 en base binaria:\n");
	ft_putnbr_base(num_x, base);
	ft_putstr("\n");

	int	num_xy;
	num_xy = -3;
	ft_putstr("\nConvierte el número -3 en base binaria:\n");
	ft_putnbr_base(num_xy, base);
	ft_putstr("\n");

	int	num_xyz;
	num_xyz = -13;
	ft_putstr("\nConvierte el número -13 en base binaria:\n");
	ft_putnbr_base(num_xyz, base);
	ft_putstr("\n");


	int	num_1;
	char	*base_;
	num_1 = 127;
	base_ = "0123456789ABCDEF";
	ft_putstr("\nConvierte el número 127 en base hexadecimal:\n");
	ft_putnbr_base(num_1, base_);
	ft_putstr("\n");

	int	num_1_090;
	num_1_090 = 255;
	ft_putstr("\nConvierte el número 255 en base hexadecimal:\n");
	ft_putnbr_base(num_1_090, base_);
	ft_putstr("\n");

	int	num_1_090p;
	num_1_090p = -23;
	ft_putstr("\nConvierte el número -23 en base hexadecimal:\n");
	ft_putnbr_base(num_1_090p, base_);
	ft_putstr("\n");

	int	num_1_090po;
	num_1_090po = -13;
	ft_putstr("\nConvierte el número -13 en base hexadecimal:\n");
	ft_putnbr_base(num_1_090po, base_);
	ft_putstr("\n");


	int	num_1_090x;
	num_1_090x = 0;
	ft_putstr("\nConvierte el número 0 en base hexadecimal:\n");
	ft_putnbr_base(num_1_090x, base_);
	ft_putstr("\n");

	int	num_1_090_;
	num_1_090_ = 213;
	ft_putstr("\nConvierte el número 213 en base hexadecimal:\n");
	ft_putnbr_base(num_1_090_, base_);
	ft_putstr("\n");

	int	num_1_090_1;
	num_1_090_1 = 13;
	ft_putstr("\nConvierte el número 13 en base hexadecimal:\n");
	ft_putnbr_base(num_1_090_1, base_);
	ft_putstr("\n");




	int	num_1i0;
	char	*base_i0;
	num_1i0 = -127;
	base_i0 = "01234567899BCDEF";
	ft_putstr("\nConvierte el número -127 en base hexadecimal (FALLA):\n");
	ft_putnbr_base(num_1i0, base_i0);
	ft_putstr("\n");


	int	num_1_;
	num_1_ = 2147483647;
	ft_putstr("\nConvierte el número 2147483647 en base binaria:\n");
	ft_putnbr_base(num_1_, base);
	ft_putstr("\n");
	int	num_1_1;
	num_1_1 = -2147483648;
	ft_putstr("\nConvierte el número -2147483648 en base binaria:\n");
	ft_putnbr_base(num_1_1, base);
	ft_putstr("\n");

	ft_putstr("\nConvierte el número -2147483648 en base decimal:\n");
	char	*base___;
	base___ = "0123456789";
	ft_putnbr_base(num_1_1, base___);
	ft_putstr("\n");

	ft_putstr("\nConvierte el número -2147483648 en base hexadecimal:\n");
	ft_putnbr_base(num_1_1, base_);
	ft_putstr("\n");

	ft_putstr("\nConvierte el número 2147483647 en base hexadecimal:\n");
	ft_putnbr_base(num_1_, base_);
	ft_putstr("\n");

	


	int	num_1_1_;
	num_1_1_ = -2147483647;
	ft_putstr("\nConvierte el número -2147483647 en base binaria:\n");
	ft_putnbr_base(num_1_1_, base);
	ft_putstr("\n");

	
	ft_putstr("\nConvierte el número -2147483647 en base decimal:\n");
	ft_putnbr_base(num_1_1_, base___);
	ft_putstr("\n");






}
