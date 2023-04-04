#include "lists.h"

/**
 * reverse_listint - it reverse linked list
 * @head: the head of linked list
 * Return: points to 1st node
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev;
	listint_t *nextt;

	prev = NULL;
	nextt = NULL;

	while (*head != NULL)
	{
		nextt = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = nextt;
	}

	*head = prev;
	return (*head);
}
