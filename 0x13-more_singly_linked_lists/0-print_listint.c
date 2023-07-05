#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list.
 * @h: position
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	int i;

	for (i = 0; h; h = h->next, i++)
		printf("%d\n", h->n);
	return (i);
}
