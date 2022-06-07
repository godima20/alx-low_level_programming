#include "main.h"
/**
 * print_last_digit - Prints the last digit of a number
 * @a: - The digit to be printed
 *
 * Return: Returns the last value of the digit
 */
int print_last_digit(int a)
{
	int value = a % 10;

	if (value < 0)
		value *= -1;
	_putchar(value + '0');
	return (value);
}
