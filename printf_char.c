#include "main.h"
/**
* printf_char -  print character
* @val: input
* Return: char
*/
int printf_char(va_list val)
{
char c;

s = va_arg(val, int);
_putchar(s);
return (1);
}

