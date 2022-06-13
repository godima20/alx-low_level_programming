#include "main.h"
int _putchar(char c);
/**
 * print_rev - prints a string in reverse followed by a new line
 * @s: the string to be printed
 */
void print_rev(char *s)
{
	int i = 0;

	while (s[i])
		i++;
	while (i--)
		_putchar(s[i]);
	_putchar('\n');
}
