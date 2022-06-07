#include "main.h"
/**
 * main - entry point of the program
 *
 * Description - Prints 10 times the alphabet
 *
 * Return: Always return 0
 */
void print_alphabet_x10(void)
{
	int count = 0;
	char alphabet;

	while (count++ <= 9)
	{
		for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
			_putchar(alphabet);
		_putchar('\n');
	}
}
