#include "lists.h"

/**
 * free_listint - it frees the linked list
 * @head: the head of linked list
 * Return: nothing
 */
void free_listint(listint_t *head)
{
	listint_t *list;

	while ((list = head) != NULL)
	{
		head = head->next;
		free(list);
	}
}
