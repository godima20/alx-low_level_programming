#include "main.h"
/**
 * main - entry point of the program
 *
 * Description - Prints the alphabets in lowercase
 *
 * Return: Always return 0
 */
void print_alphabet(void);
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
		_putchar(alphabet);
	_putchar('\n');
	return (0);
}
