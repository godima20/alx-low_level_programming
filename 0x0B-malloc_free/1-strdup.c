#include "main.h"
#include <stdlib.h>
/**
 * _strdup - returns a pointer to a newly located memory space
 * @str: the string to be copied
 *
 * Return: if str == NULL or less memory, NULL otherwise
 * a pointer to the duplicated string
 */
char *_strdup(char *str)
{
	char *duplicate;
	int i, len = 0;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i]; i++)
		len++;
	duplicate = malloc(sizeof(char) * (len + 1));
	if (duplicate == NULL)
		return (NULL);
	for (i = 0; str[i]; i++)
		duplicate[i] = str[i];
	duplicate[i] = str[i];
	duplicate[len] = '\0';
	return (duplicate);
}
