#include "main.h"
/**
 * times_table - Prints the 9 times table
 *
 * Return: Always return 0
 */
void times_table(void)
{
	int num, times, result;

	for (num = 0; num <= 9; num++)
	{
		_putchar('0');
		for (times = 0; times <= 9; times++)
		{
			_putchar(',');
			_putchar(' ');
			result = num * times;
			if (times <= 9)
				_putchar(' ');
			else
				_putchar((result / 10) + '0');
			_putchar((result % 10) + '0');
		}
		_putchar('\n');
	}
}
