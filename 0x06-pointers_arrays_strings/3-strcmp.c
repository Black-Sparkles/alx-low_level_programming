#include "main.h"

/**
 * _strcmp - compares pointers to two strings
 * @s1: point to the first string 
 * @s2: point to the second string
 * Return: if str1 < str2, the -ive dif of the first unmatched characters.
 * If str1 == str2, 0
 * If str1 > str2, +ve diff of the first unmatched characters
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
