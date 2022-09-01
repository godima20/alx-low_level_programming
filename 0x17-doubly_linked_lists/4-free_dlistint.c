#include "lists.h"
/**
 * free_dlistint - A function that frees the dlistint_t list
 * @head: The pointer
 *
 * Return: Nothing
 */
void free_dlistint(dlistint_t *head)	
{
	dlistint_t *tmp;

	if (head == NULL)
		return;

	while (head)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
	head = NULL;
}
