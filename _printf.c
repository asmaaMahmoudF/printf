#include "main.h"
/**
 * _printf - print f function
 * @format: the string will be printed
 * Return: number of digits printed
 */
int _printf(const char *format, ...)
{
	int j, i = 0, len = 0;
	int match = 0;
	va_list ap;
	convert_match fun[] = {{'c', printf_char}, {'s', printf_string},
		{'%', print_mod}, {'i', printf_int},
		{'d', printf_int}, {'b', printf_unsigned}};
	va_start(ap, format);
	if ((!format) || (format[0] == '%' && !format[1]))
		return (-1);
	while (format[i] && format)
	{
		if (format[i] == '%' && format[i + 1]) 
		{
			if (format[i + 1] == '\0')
				return (-1);
			if (format[i + 1] != '\0')
			{
			    j = 0;
				match = 0;
			    while (j < 6)
			       {
			    	 if (format[i + 1] == fun[j].ch)
			        	{
				        	len += fun[j].f(ap);
				        	i += 2;
							match = 1;
				        	break;
				        }
				    j++;
		        	}
				if (!match)
					{
						_putchar('%');
						_putchar(format[i + 1]);
						len += 2;
						i += 2;
					}
			}
		}
		else
		{
			_putchar(format[i]);
			len++;
			i++;
		}
	}
	va_end(ap);
	return (len);
}
