#include "main.h"

/**
 * _strcmp - compares pointers to two strings
 * @s1: point to the first string 
 * @s2: point to the second string
 * Return: if str1 < str2, -ive diff
 * If str1 == str2, 0
 * If str1 > str2, +ve diff
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
