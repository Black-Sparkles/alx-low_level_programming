#include "lists.h"

/**
 * listint_len - returns a number of elements in a list.
 * @h: the head of list.
 * Return: @n
 */

size_t listint_len(const listint_t *h)
{
	size_t numnodes;

	numnodes = 0;

	while (h != NULL)
	{
		h = h->next;
		numnodes++;
	}
	return (numnodes);
}
