#include "lists.h"

/**
 * get_nodeint_at_index - it returns the nth node of list
 * @head: the head of linked list
 * @index: index of node
 * Return: nth node/ NULL for no node.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; i < index && head != NULL; i++)
	{
		head = head->next;
	}

	return (head);
}
