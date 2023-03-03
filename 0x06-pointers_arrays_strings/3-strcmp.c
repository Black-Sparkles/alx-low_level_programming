#include "main.h"

/**
 * _strcmp - compares pointers tO strings
 * @s1: point to the first string
 * @s2: point to the second string
 * Return: If s1 < s2, -ive dif
 * If s1 == s2, 0
 * If s1 > s2, +ve diff
 *
 */

int _strcmp(char *s1, char *s2)

{
	while (*s1 && *s2 && *s1 == *s2)
	{
	s1++;
	s2++;
	}
	return (*s1 - *s2);
}
