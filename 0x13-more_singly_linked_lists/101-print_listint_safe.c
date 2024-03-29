#include "lists.h"

/**
 * free_listp - it frees linked list
 * @head: the head of linked list.
 * Return: nothing
 */
void free_listp(listp_t **head)
{
	listp_t *temp;
	listp_t *curr;

	if (head != NULL)
	{
		curr = *head;
		while ((temp = curr) != NULL)
		{
			curr = curr->next;
			free(temp);
		}
		*head = NULL;
	}
}

/**
 * print_listint_safe - it prints linked list.
 * @head: the head of linked list
 * Return: node number
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t numnodes = 0;
	listp_t *hptr, *new, *add;

	hptr = NULL;
	while (head != NULL)
	{
		new = malloc(sizeof(listp_t));

		if (new == NULL)
			exit(98);

		new->point = (void *)head;
		new->next = hptr;
		hptr = new;

		add = hptr;

		while (add->next != NULL)
		{
			add = add->next;
			if (head == add->point)
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free_listp(&hptr);
				return (numnodes);
			}
		}

		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		numnodes++;
	}

	free_listp(&hptr);
	return (numnodes);
}
