#include "main.h"
/**
 * _strlen_recursion - returns the length of a string
 * @s: the string to be returned
 *
 * Return: the length of the string
 */
int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s)
	{
		len++;
		len += _strlen_recursion(s - len);
	}
	return (len);
}
