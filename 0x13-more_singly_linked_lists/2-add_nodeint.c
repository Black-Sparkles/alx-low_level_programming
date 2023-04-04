#include "lists.h"

/**
 * add_nodeint - Adds a new node at initial start of linked list
 * @head: the head of linked list
 * @n: n value
 * Return: the address of @head.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (*head);
}
