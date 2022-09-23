#include "hash_tables.h"

/**
 * hash_table_create - Create a Hash Table
 * @size: The size of the hash table
 * Description: Allocating A Hash Table using given size
 * Return: NULL Error Occurred Or Hash Table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_table;

	hash_table = malloc(sizeof(hash_table_t));

	if (size <= 0)
		return (NULL);

	if (!hash_table)
	{
		return (NULL);
	}

	hash_table->size = size;
	hash_table->array = calloc(size, sizeof(hash_table_t *));
	if (!hash_table->array)
	{
		free(hash_table);
		return (NULL);
	}

	return (hash_table);
}
