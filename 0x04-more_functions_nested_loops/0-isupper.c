#include "main.h"

/**
* _isupper - function declaration
* Description: check case of c
* @c: character to test
* Return: 1 for true and 0 for false
*/

int _isupper(int c);

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
