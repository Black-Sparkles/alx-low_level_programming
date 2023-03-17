#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - allocates 
 * @b: size
 * Return: nothing
 */

void *malloc_checked(unsigned int b);
/**
 * malloc_checked - allocates
 * @b: size
 * Description: if p is null then exit is 98
 * Return: nothing
 */

void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);

	if (p == NULL)
		exit(98);

	return (p);
}
