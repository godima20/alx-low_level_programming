#include "main.h"
/**
 * print_numbers - prints numbers from 0 to 9
 */
void print_numbers(void)
{
	int num1;

	for (num1 = 0; num1 <= 9; num1++)
	{
		_putchar((num1 % 10) + '0');
	}
	_putchar('\n');
}
