#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - function declaration
 * @s1: first string
 * @s2: second string
 * @n: number of bytes
 * Return: string or null
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int index, len1, len2;
	char *string;

	if (s2 == NULL)
		s2 = "";
	if (s1 == NULL)
		s1 = "";

	len1 = 0;
	len2 = 0;
	while (s2[len2] != '\0')
		len2++;
	while (s1[len1] != '\0')
		len1++;

	if (n >= len2)
		n = len2;

	string = malloc(sizeof(char) * n + len1 + 1);
	if (string == NULL)
		return (NULL);

	for (index = 0; index < len1; index++)
		string[index] = s1[index];

	for (index = 0; index < n; index++)
		string[index + len1] = s2[index];

	string[index + len1] = '\0';

	return (string);
}
