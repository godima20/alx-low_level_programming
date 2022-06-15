#include "main.h"
/**
 * _strncat - concanates two numbers using most inputted
 * number of bytes from src.
 * @dest: the string to be appended upon
 * @src: the string to be appended to dest
 * @n: the number of bytes from src to be appended to dest
 *
 * Return: a pointer to the string dest result
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, dest_len = 0;

	while (dest[i++])
		dest_len++;
	for (i = 0; src[i] && i < n; i++)
		dest[dest_len++] = src[i];
	return (dest);
}
