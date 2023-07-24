#include "main.h"

/**
* _strlen - returns the length of string.
* @s: pointer
*
* Return: The length of the string
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
* puts_half - prints the second half
* @str: pointer
*/

void puts_half(char *str)
{
	int length = _strlen(str);
	int start_index;

if (length % 2 == 0)
{
	start_index = length / 2;
}
else
{
	start_index = (length + 1) / 2;
}

while (str[start_index] != '\0')
{
	_putchar(str[start_index]);
	start_index++;
}
	_putchar('\n');
}
