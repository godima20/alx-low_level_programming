#include "main.h"
/**
 * print_line - prints a straight line
 * @n: the number of characters to be printed
 */
void print_line(int n)
{
	int line;

	for (line = 0; line < n; line++)
	{
		if (n > 0)
			_putchar('_');
	}
	_putchar('\n');
}
