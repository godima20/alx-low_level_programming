#include "main.h"
/**
 * *_strcat - concanates the string pointed to by @src
 *	 including the terminating null byte to the end
 *	 of the string pointed by @dest
 * @dest: a pointer to the string to be concaneted
 * @src: the source string to be appended to @dest
 */
char *_strcat(char *dest, char *src)
{
	int s = 0, dest_len = 0;

	while (dest[s++])
		dest_len++;
	for (s = 0; src[s]; s++)
		dest[dest_len++] = src[s];
	return (dest);
}
