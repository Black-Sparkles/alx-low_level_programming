#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>

/**
 * print_list - print list
 * @head: the head containing lists
 * Return: number
 */

size_t print_list(const list_t *head)
{
	int count = 0;

	while (head != NULL)
	{
		if (head->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", head->len, head->str);
		head = head->next;
		count++;
	}
	return (count);
}
