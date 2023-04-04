#include "lists.h"

/**
 * free_listint2 - it frees a linked list
 * @head: the head of linked list
 * Return: nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *list;
	listint_t *temp;

	if (head != NULL)
	{
		temp = *head;
		while ((list = temp) != NULL)
		{
			temp = temp->next;
			free(list);
		}
		*head = NULL;
	}
}
