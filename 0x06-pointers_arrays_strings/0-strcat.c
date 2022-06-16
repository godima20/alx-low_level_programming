#include "main.h"
/**
 * _strcat - concanates two strings
 *
 * @dest: a pointer to the string to be concaneted
 * @src: the source string to be appended to @dest
 */
char *_strcat(char *dest, char *src)
{
	int s = 0, dest_len = -1;

	while (dest[s++])
		dest_len++;
	for (s = 0; src[s]; s++)
		dest[dest_len++] = src[s];
	return (dest);
}
