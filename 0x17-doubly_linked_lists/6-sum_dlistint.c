#include "lists.h"
/**
 * sum_dlistint - A function that returns the sum of all data
 * @head: The pointer
 *
 * Return: The data (n) or if the list is empty, return 0
 */
int sum_dlistint(dlistint_t *head)
{
	int sum;

	dlistint_t *current;

	sum = 0;
	current = head;
	while (current)
	{
		sum += current->n;
		current = current->next;
	}
	return (sum);
}
