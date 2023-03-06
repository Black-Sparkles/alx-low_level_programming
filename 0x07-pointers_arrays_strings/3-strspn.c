#include "main.h"

/**
 * _strspn - Entry point
 * @s: input
 * @accept: input
 * Return: Always 0 (Success)
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 0;

	int value;

	while (*s)
	{
		for (value = 0; accept[value]; value++)
		{
		if (*s == accept[value])
		{
		n++;
		break;
		}
		else if (accept[value + 1] == '\0')
		return (n);
		}
		s++;
	}
	return(n);
}
