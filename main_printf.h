#ifndef main_printf_H
#define main_printf_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>


/**
 * struct format - match the conversion specifiers for printf
 * @id: type char pointer of the specifier i.e (l, h) for (d, i, u, o, x, X)
 * @f: type pointer to function for the conversion specifier
 *
 */

typedef struct format
{
        char *id;
        int (*f)();
} convert_match;


int _printf(const char *format, ...);
int _putchar(char ch);

#endif
~      
