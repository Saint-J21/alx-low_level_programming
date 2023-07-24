#include "main.h"

/**
* _strlen - Returns length of string.
* @s: Pointer to the string.
*
* Return: The length of string
*/

int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}

/**
* print_rev - Prints a string in reverse.
* @s: Pointer to the string.
*/

void print_rev(char *s)
{
	int length = _strlen(s);
	int i;

	for (i = length - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
