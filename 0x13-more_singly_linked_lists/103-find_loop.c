#include "lists.h"
#include <stdlib.h>
/**
 * listint_t *find_listint_loop - find loop in linked list
 * @head: pointer to head pointer of linked list
 *
 * Return: Address of node where the loop starts
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *turtle, hare;

	turtle = hare = head;
	while (turtle != NULL && hare != NULL)
	{
		turtle = turtle->next;
		hare = hare->next->next;
		if (turtle == hare)
		{
			turtle = head;
			while (turtle != hare)
			{
				turtle = turtle->next;
				hare = hare->next;
			}
			return (turtle);
		}
	}
	return (NULL);
}
