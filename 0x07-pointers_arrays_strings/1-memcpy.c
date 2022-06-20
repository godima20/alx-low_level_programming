#include "main.h"
/**
 * _memcpy - copies @n bytes from memory area @src to memory @dest
 * @src: the source buffer to copy characters from
 * @dest: a pointer to the memory area to copy @src into
 * @n: the number of bytes to copy from @src
 *
 * Return: a pointer to the destination buffer @dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	char *destination = dest;
	const char *source = src;

	for (i = 0; i < n; i++)
		destination[i] = source[i];
	return (dest);
}
