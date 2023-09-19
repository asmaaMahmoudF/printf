#include "main.h"
<<<<<<< HEAD

=======
>>>>>>> 99d0310329204be56d458dc69bf92f6ef5c40bd9
/**
* printf_string - printf string
* @val: input
* Return: int
*/
int printf_string(va_list val)
{
char *s;
int i, len;

s = va_arg(val, char *);
if (s == NULL)
{
s = "(null)";
len = _strlen(s);
for (i = 0; i < len; i++)
{
_putchar(s[i]);
}
return (len);
}
else
{
len = _strlen(s);
for (i = 0; i < len; i++)
{
_putchar(s[i]);
}
return (len);
}
}
