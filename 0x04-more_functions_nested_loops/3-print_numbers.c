#include "main.h"
/**
 * print_numbers - prints numbers from 0 to 9
 * Return: Always return 0
 */
void print_numbers(void)
{
	int num1;

	for (num1 = 0; num1 <= 9; num1++)
	{
		_putchar(num1);
	}
	_putchar('\n');
	return (0);
}
