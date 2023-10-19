#include "main.h"
/**
 * printf_unsigned - prints integer
 * @args: argument to print
 * Return: number of characters printed
 */
int printf_unsigned(va_list args)
{
	unsigned int n = va_arg(args, unsigned int);
	int nums, last = n % 10, digit, exp = 1;
	int  i = 1;

	n = n / 10;
	nums = n;

	if (last < 0)
	{
		_putchar('-');
		nums = -nums;
		n = -n;
		last = -last;
		i++;
	}
	if (nums > 0)
	{
		while (nums / 10 != 0)
		{
			exp = exp * 10;
			nums = nums / 10;
		}
		nums = n;
		while (exp > 0)
		{
			digit = nums / exp;
			_putchar(digit + '0');
			nums = nums - (digit * exp);
			exp = exp / 10;
			i++;
		}
	}
	_putchar(last + '0');

	return (i);
}