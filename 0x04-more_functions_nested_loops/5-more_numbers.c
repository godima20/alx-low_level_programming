#include "main.h"
/**
 * more_numbers - prints 10 times the number from 0 to 14
 */
void more_numbers(void)
{
	int num1, count;

	for (count = 0; count <= 9; count++)
	{
		for (num1 = 0; num1 <= 14; num1++)
		{
			if (num1 > 9)
				_putchar((num1 / 10) + '0');
			_putchar((num1 % 10) + '0');
		}
		_putchar('\n');
	}
}
