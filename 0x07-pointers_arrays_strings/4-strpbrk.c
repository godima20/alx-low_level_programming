#include "main.h"
/**
 * _strpbrk - searches a string for any set of bytes
 * @s: the string to be searched
 * @accept: the sets of bytes to be searched
 *
 * Return: if a set is matched, a pointer to the marched
 * byte. if no set is matched, NULL
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
				return (s);
		}
		s++;
	}
	return ('\0');
}
