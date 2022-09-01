#include "lists.h"
/**
 * add_dnodeint - A function that adds a new node at the beg of
 * a dlistint_t list
 * @head: The pointer
 * @n: The data
 *
 * Return: The address of the new element, or NULL if it fails
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newNode;

	newNode = malloc(sizeof(dlistint_t));
	if (newNode == NULL)
		return (NULL);

	newNode->n = n;
	newNode->prev = NULL;
	newNode->next = *head;

	if (head)
		(*head)->prev = newNode;
	*head = newNode;
	return (newNode);
}
