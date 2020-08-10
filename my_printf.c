/*
** EPITECH PROJECT, 2019
** my_printf
** File description:
** my_printf
*/

#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>
#include "my.h"

void my_printf(char *str, ...)
{
    int i = 0;
    int argp = 0;
    va_list datatype;

    va_start(datatype, str);
    while (str[i] != '\0') {
        if (str[i] == '%') {
            i++;
            while (str[i] == '%')
                i++;
            argp = str[i];
            traitement(argp, datatype);
        }
        if (str[i - 1] != '%') {
            my_putchar(str[i]);
        }
        i++;
    }
    va_end(datatype);
}

void traitement(int arg, va_list datatype)
{
    if (arg == 'd' || arg == 'i')
        my_put_nbr(va_arg(datatype, int));
    if (arg == 'x' || arg == 'X')
       my_put_nbr_base(va_arg(datatype, int), "0123456789abcdef");
    if (arg == 'o')
            my_put_nbr_base(va_arg(datatype, int), "01234567");
    if (arg == 'u')
        my_putchar('k');
    if (arg == 'c')
        my_putchar(va_arg(datatype, char *));
    if (arg == 's')
        my_putstr(va_arg(datatype, char *));
    if (arg == 'p') {
        my_putchar('0');
        my_putchar('x');
        my_put_nbr_base(va_arg(datatype, void *),"0123456789abcdef");
        }
    if (arg == 'b')
            my_put_nbrbi_base(va_arg(datatype, int), "01");
    if (arg == 'S')
        my_putchar('l');
}

int main(void)
{
    my_printf("%s%d%s", "%s%dAstek", 42, "%");
    return (0);
}