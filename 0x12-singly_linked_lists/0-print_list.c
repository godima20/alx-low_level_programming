#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_list - prints all the elements of a list_t list
 * @h: the list_t list
 *
 * Return: the number of nodes in h
 */
size_t print_list(const list_t *h)
{
	const list_t *tmp;
	size_t count = 0;

	if (h && h->str == NULL)
	{
		printf("[0] (nil)\n");
	}
	else
	{
		tmp = h;
		if (tmp)
			tmp = h;

	while (tmp)
	{
		printf("[%d] %s\n", tmp->len, tmp->str);
		count++;
		tmp = tmp->next;
	}
	}
	return (count);
}
