#include "main.h"
/**
 * print_times_table - Prints timetable of the output
 * @n: The value of the times tabe to be printed
 */
void print_times_table(int n)
{
	int digit, res, mult;

	if (n >= 0 && n <= 15)
	{
		for (digit = 0; digit <= n; digit++)
			_putchar('0');
		for (mult = 1; mult <= n; mult++)
		{
			_putchar(',');
			_putchar(' ');

			res = digit * mult;
			if (res <= 99)
				_putchar(' ');
			if (res <= 9)
				_putchar(' ');
			if (res >= 100)
			{
				_putchar((res / 100) + '0');
				_putchar((res / 10) + '0');
			}
			else if (res <= 99 && res >= 10)
			{
				_putchar((res / 10) + '0');
			}
			_putchar('\n');
		}
	}
}
