#include "main.h"
/**
 * print_most_numbers - prints numbers from 0 to 9
 */
void print_most_numbers(void)
{
	int num1;

	for (num1 = 0; num1 <= 9; num1++)
	{
		if (num1 != 2 && num1 != 4)
			_putchar((num % 10) + '0');
	}
	_putchar('\n');
}
