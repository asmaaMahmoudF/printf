#include "main.h"
/**
 * hexa - printf hexa function
 * @val: input.
 * Return: print chars.
 */
int hexa(va_list val)
{
    int i;
    int cou = 0;
    int *array;
    unsigned int num = va_arg(val, unsigned int);
    unsigned int temp = num;

    while (num / 16 != 0)
    {
        num /= 16;
        cou++;
    }
    cou++;
    array = malloc(cou * sizeof(int));

    for (i = 0; i < cou; i++)
    {
        array[i] = temp % 16;
        temp /= 16;
    }
    for (i = cou - 1; i >= 0; i--)
    {
        if (array[i] > 9)
            array[i] = array[i] + 39;
        _putchar(array[i] + '0');
    }
    free(array);
    return (cou);
}
