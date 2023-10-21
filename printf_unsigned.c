#include "main.h"


/**
 * printf_unsigned - print unsigned interger 
 * @args: input
 * Return: nouber of chars
 */
int printf_unsigned(va_list args)
{
unsigned int num = va_arg(args, unsigned int);
char buffer[20];  /* enough to hold all digits of an unsigned int */
int i = 0, len = 0;

/* Handle 0 explicitly */
if (num == 0)
{
_putchar('0');
return (1);
}
/* Extract digits into the buffer */
while (num > 0)
{
buffer[i++] = (num % 10) + '0';
num /= 10;
}
/* Print digits in reverse order */
while (i--)
{
_putchar(buffer[i]);
len++;
}
return (len);
}



