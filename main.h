#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <limits.h>
#include <unistd.h>

/**
 * struct format - match the conversion specifiers for printf
 * @id: type char pointer of the specifier i.e (l, h) for (d, i, u, o, x, X)
 * @f: type pointer to function for the conversion specifier
 *
*/
typedef struct format
{
char ch;
int (*f)(va_list);
} convert_match;

int _strlen(char *s);
int _printf(const char *format, ...);
int _putchar(char c);
int printf_char(va_list ap);
int print_mod(va_list ap);
int printf_int(va_list ap);
int printf_string(va_list ap);
int printf_unsigned(va_list args);
#endif

