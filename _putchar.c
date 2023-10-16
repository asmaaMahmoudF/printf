#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _putchar - writes the character to print
 * @ch : the character to print
 * Return: (1) success
 *      (-1) error
*/
int _putchar(char ch)
{
return (write(1, &ch, 1));
}
