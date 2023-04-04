#include "lists.h"

/**
 * sum_listint - it returns the sum of the n data
 * @head: the head of linked list
 * Return: the sum @sum_listint
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
