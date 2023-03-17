#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - function declaration
 * @min: min of array range
 * @max: max of array range
 * Return: pointer or null
 */

int *array_range(int min, int max)
{
	int *a, i = 0;

	if (min > max)
		return (NULL);

	a = malloc((sizeof(int) * (max - min)) + sizeof(int));

	if (a == NULL)
		return (NULL);

	while (min <= max)
	{
		a[i] = min;
		i++;
		min++;
	}

	return (a);
}
