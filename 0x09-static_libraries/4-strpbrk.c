#include "main.h"

/**
 * *_strpbrk - function declaration
 * @s: string
 * @accept: bytes
 * Return: pointer
 */

char *_strpbrk(char *s, char *accept);

/**
 * *_strpbrk - function definition
 * @s: the string
 * @accept: bytes
 * Description: searches for a string of bytes
 * Return: pointer to matched byte
 */

char *_strpbrk(char *s, char *accept)
{
	int str_index;
	int sub_str_index;

	for (str_index = 0; s[str_index] != '\0'; str_index++)
	{
		for (sub_str_index = 0; accept[sub_str_index] != '\0'; sub_str_index++)
		{
			if (s[str_index] == accept[sub_str_index])
			{
				return (s + str_index);
			}
		}
	}
	return (0);
}
