#include "main.h"
/**
 * _strstr - locates a substring
 * @needle: the substring to be found
 * @haystack: the string to be searched
 *
 * Return: if the string is located, a pointer to the beggining
 * if not located, NULL
 *
 */
char *_strstr(char *haystack, char *needle)
{
	int i;

	if (*needle == 0)
		return (haystack);
	while (*haystack)
	{
		i = 0;
		if (haystack[i] == needle[i])
		{
			do {
				if (needle[i + 1] == '\0')
					return (haystack);
				i++;
			} while (haystack[i] == needle[i]);
		}
		haystack++;
	}
	return ('\0');
}
