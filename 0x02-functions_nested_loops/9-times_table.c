#include "main.h"
/**
 * times_table - Prints the 9 times table
 *
 * Return: Always return 0
 */
void times_table(void)
{
	int num, num1, result;

	for (num = 0; num <= 9; num++)
	{
		_putchar('0');
		for (num1 = 1; num1 <= 9; num1++)
		{
			_putchar(',');
			_putchar(' ');
			result = num * num1;
			if (result < 10)
				_putchar(' ');
			else
				_putchar((result / 10) + '0');
			_putchar((result % 10) + '0');
		}
		_putchar('\n');
	}
}
