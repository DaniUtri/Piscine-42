#!/bin/bash
# Compilar
gcc -Wall -Wextra -Werror -c *.c
# Crear la librería
ar rc libft.a *.o
# Crear el índice
ranlib libft.a
# Eliminar *.o
rm *.o
# Compilar
# gcc main.c -L. -lft
