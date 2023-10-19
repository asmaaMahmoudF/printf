#include "main.h"

/**
 * printf_bin - prints a binary number.
 * @val: arguments.
 * Return: 1.
 */
int printf_bin(va_list vals)
{
	int flag = 0;
	int conts = 0;
	int i, a = 1, b;
	unsigned int nums = va_arg(vals, unsigned int);
	unsigned int p;

	for (i = 0; i < 32; i++)
	{
		p = ((a << (31 - i)) & nums);
		if (p >> (31 - i))
			flag = 1;
		if (flag)
		{
			b = p >> (31 - i);
			_putchar(b + 48);
			conts++;
		}
	}
	if (conts == 0)
	{
		conts++;
		_putchar('0');
	}
	return (conts);
}
