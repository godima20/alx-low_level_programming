#include "main.h"
/**
 * print_sign - Prints the sign of a number
 * @n: is the character to be checked
 *
 * Return: 1 when n is greater 0, 0 when n is 0 and -1 when n is less zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
