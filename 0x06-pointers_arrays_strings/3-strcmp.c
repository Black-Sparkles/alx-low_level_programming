#include "main.h"

/**
 * _strcmp - compares pointers tO  strings
 * @s1: point to the first string 
 * @s2: point to the second string
 * Return: If str1 < str2, -ive dif
 * If str1 == str2, 0
 * If str1 > str2, +ve diff
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
