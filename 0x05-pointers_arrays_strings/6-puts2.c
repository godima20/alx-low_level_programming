#include "main.h"
int _putchar(char c);
/**
 * puts2 - prints every character of a string
 * @str: the characters to be printed
 */
void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
		i++;
	}
	_putchar('\n');
}
