#include "lists.h"
/**
 * dlistint_len - A function that prints all the elements of a dlistint_t
 * @h: The pointer to dlistint_t
 *
 * Return: the number of elements
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
/**
 * delete_dnodeint_at_index - A function that deletes a node at index
 * of a dlistint_t list
 * @head: double pointer to the head of the list
 * @index: The index of the node delete
 *
 * Return: 1 for success, -1 for failure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head;
	unsigned int i = 0;

	if (*head == NULL || dlistint_len(current) < index + 1)
		return (-1);
	if (!index)
	{
		(*head) = current->next;
		if (current->next)
			current->next->prev = NULL;
		current->next = NULL;
		free(current);
		return (1);
	}
	while (i < index)
	{
		current = current->next;
		i++;
	}
	current->prev->next = current->next;
	if (current->next)
		current->next->prev = current->prev;
	free(current);
	return (1);
}
