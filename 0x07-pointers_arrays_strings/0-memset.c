#include "main.h"
/**
 * _memset - fills @n bytes to the memory pointed to by @s with @b
 * @s: a pointer to the memory area to be filled
 * @b: the character to fill the memory area with
 * @n: the number of bytes to be filled
 *
 * Return: A pointer to the filled memory area @s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
	char *memory = s, value = b;

	for (i = 0; i < n; i++)
		memory[i] = value;
	return (memory);
}
