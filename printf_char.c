#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
/**
* printf_char -  print character
* @val: input
* Return: char
*/
int printf_char(va_list val)
{
char s;

s = va_arg(val, int);
_putchar(s);
return (1);
}

