/*
** EPITECH PROJECT, 2019
** my.h
** File description:
** my
*/

#include <stdarg.h>
#ifndef MY_H_
# define MY_H_

void my_putchar(char c);
int my_put_nbr(int nb);
int my_put_nbr_base(long long nb, char *base);
int my_put_nbrbi_base(long long nb, char *base);
void my_printf(char *str, ...);
int my_putstr(char *str);
int my_strlen(char *str);
int binarybase(va_list print);
void traitement(int arg, va_list print);


#endif /* !MY_H_ */
