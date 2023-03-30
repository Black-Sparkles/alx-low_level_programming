#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * list_len - list length
 * @h: the head that prints out first
 * Return: number
 */

size_t list_len(const list_t *h)
{
	int counter = 0;

	while (h != NULL)
	{
		counter++;
		h = h->next;
	}

	return (counter);
}
