#include "lists.h"
/**
 * dlistint_len - A function that prints all the elements of a dlistint_t
 * @h: the pointer to dlistint_t
 *
 * Return: The number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *current = h;
	size_t elements = 0;

	while (current)
	{
		current = current->next;
		elements++;
	}
	return (elements);
}
