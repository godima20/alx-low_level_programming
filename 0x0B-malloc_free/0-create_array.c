#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates arrays of characters and initializes it
 * with a specific char
 * @size: the array to be initialized
 * @c: the specific char to initialize array
 *
 * Return: if size == 0 or failure in function - NULL
 * otherwise, a pointer to an array
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i;

	if (size == 0)
		return (NULL);
	array = malloc(sizeof(char) * size);

	if (array == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		array[i] = c;
	return (array);
}
