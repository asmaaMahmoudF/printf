#include "main.h"
/**
 * _printf - print f function
 * @format: the string will be printed
 * Return: number of digits printed
 */
int _printf(const char *format, ...)
{
	int j, i = 0, len = 0, match = 0;
	va_list ap;
	convert_match fun[] = {{'c', printf_char}, {'s', printf_string},
{'p', print_address}, {'S', print_ex_str},
	{'%', print_mod}, {'i', printf_int}, {'d', printf_int}, {'X', HEXA},
	{'b', printf_bin}, {'u', printf_unsigned}, {'o', octal}, {'x', hexa}};
	va_start(ap, format);
	if ((!format) || (format[0] == '%' && !format[1]))
		return (-1);
	while (format[i] && format)
	{
		if (format[i] == '%' && format[i + 1])
		{
			if (format[i + 1] == '\0')
				return (-1);
			match = 0;
			for (j = 0; j < 12; j++)
			{
				if (format[i + 1] == fun[j].ch)
				{
					len += fun[j].f(ap);
					i += 2, match = 1;
					break;
				}
			}
			if (!match)
			{
				_putchar('%');
				_putchar(format[i + 1]);
				len += 2, i += 2;
			}
		}
		else
		{
			_putchar(format[i]);
			len++, i++;
		}
	}
	va_end(ap);
	return (len);
}
