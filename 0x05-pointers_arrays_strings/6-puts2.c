#include "main.h"
/**
 * puts2 - prints every character of a string
 * @str: the characters to be printed
 */
void puts2(char *str)
{
	int index = 0, length = 0;

	while (str[index++])
		length++;
	for (index = 0; index < length; index++)
	putchar(str[index]);
	putchar('\n');
}
