#include "main.h"
/**
 * main - entry point of the program
 *
 * Description - Prints 10 times the alphabet
 *
 * Return: Always return 0
 */
void print_alphabet_x10(int count = 0, char lowercase)
{
	int count = 0;
	char lowercase;

	while (count++ <= 9)
	{
		for (lowercase = 'a'; lowercase <= 'z'; lowercase++)
			_putchar(lowercase);
		_putchar('\n');
	}
}
