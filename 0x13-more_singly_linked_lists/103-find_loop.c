#include "lists.h"

/**
 * find_listint_loop - it finds loop in linked list.
 * @head: the head of linked list
 * Return: address of the node of the starting loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *point2;
	listint_t *prev;

	point2 = head;
	prev = head;
	while (head && point2 && point2->next)
	{
		head = head->next;
		point2 = point2->next->next;

		if (head == point2)
		{
			head = prev;
			prev = point2;
			while (1)
			{
				point2 = prev;
				while (point2->next != head && point2->next != prev)
				{
					point2 = point2->next;
				}
				if (point2->next == head)
					break;

				head = head->next;
			}
			return (point2->next);
		}
	}

	return (NULL);
}
