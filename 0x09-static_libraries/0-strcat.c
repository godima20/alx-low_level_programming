#include "main.h"
/**
 * _strcat - concanates two strings
 *
 * @dest: a pointer to the string to be concaneted
 * @src: the source string to be appended to @dest
 * Return: return @dest
 */
char *_strcat(char *dest, char *src)
{
	int s = -1, dest_len;

	for (dest_len = 0; dest[dest_len] != '\0'; dest_len++)
	;
	do {
		s++;
		dest[dest_len] = src[s];
		dest_len++;
	} while (src[s] != '\0');
	return (dest);
}
