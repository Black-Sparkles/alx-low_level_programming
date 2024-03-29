#include "lists.h"

/**
 * add_nodeint_end - Adds a new node at end of linked list
 * @head: the head of linked list
 * @n: n value
 * Return: the address of @head
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *temp;

	(void)temp;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;
	temp = *head;

	if (temp == NULL)
	{
		*head = new;
	}
	else
	{
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = new;
	}

	return (*head);
}
