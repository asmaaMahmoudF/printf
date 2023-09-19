#include "main_printf.h"

/**
 * _printf - is a function that selects the correct function to print
 * @format: indentifier to look for.
 * Return: the length of the string
 */
int _printf(const char * const format, ...)
{
convert_match m[] = {
{"%s", printf_string}, {"%c", printf_char},
{"%%", printf_37},
{"%i", printf_int}, {"%d", printf_dec}
};
va_list formatptr;
int i = 0, j, len = 0;

va_start(formatptr, format);
if (format == NULL || (format[0] == '%' && format[1] == '\0'))
return (-1);

Here:
while (format[i] != '\0')
{
j = 13;
while (j >= 0)
{
if (m[j].id[0] == format[i] && m[j].id[1] == format[i + 1])
len += m[j].f(formatptr);
i = i + 2;
goto Here;
}
j--;
}
_putchar(format[i]);
len++;
i++;
}
va_end(formatptr);
return (len);
}
