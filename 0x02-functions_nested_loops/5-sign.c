#include "main.h"
#include <ctype.h>

/**
 * print_sign - print sign of a number
 * @n: checked character
 * Return: 1 if n is positive 0 if n is zero -1 if n is negative
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('_');
		return (-1);
	}
	else
	{
		_putcher('0');
		return (0);
	}
}