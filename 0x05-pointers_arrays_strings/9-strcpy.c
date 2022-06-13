#include "main.h"
/**
 * _strcpy - copies the string pointed by @str
 * @dest: - a buffer to copy the string to
 * @src: the source string to copy
 *
 * Return: A pointer to the destination string @dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i])
	{
		*dest([i]) = *src([i]);
		i++;
	}
	return (dest);
}
