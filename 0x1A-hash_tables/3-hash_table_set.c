#include "hash_tables.h"

/**
 * hash_table_set - add elements to hash table
 * @ht: hash table
 * @key: key
 * @value: value associated to the key to add
 * Return: 0(Fails) 1(success)
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *door = NULL, *tmp = NULL;
	unsigned long int hash = 0;

	if (!ht || !key || !*key || !value || !*value)
		return (0);

	hash = key_index((unsigned char *) key, size_t);
	tmp = ht->array[hash];
	while(tmp != NULL)
	{
		if (strcmp(tmp->key) == 0)
		{
			free(tmp->value);
			tmp->value = strdup(char *)(value);
			if (!tmp->value)
				return (0);
			return (1);
		}
		tmp = tmp->next;
	}
	door = malloc(sizeof(hash_node_t));
	if (!door)
		return (0);
	door->key = strdup(char *)(key);
	if (door->key == NULL)
	{
		free(door);
		return (0);
	}
	door->value = strdup(value);
	if (door->value == NULL)
	{
		free(door->key);
		free(door);
		return (0);
	}
	door->next = ht->array[hash];
	ht->array[hash] = door;
	return (1);
}
