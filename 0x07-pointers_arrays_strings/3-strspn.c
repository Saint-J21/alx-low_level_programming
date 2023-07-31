#include "main.h"

/**
 * _strspn - gets the length of a prefix substring.
 *
 * @s: pointer to the string to be searched.
 * @accept: pointer to the string containing.
 *
 * Return: the number of bytes
 *
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int is_matching = 1;

	while (*s && is_matching)
	{
		char *a = accept;

		is_matching = 0;

		while (*a)
		{
			if (*s == *a)
			{
				is_matching = 1;
				count++;
				break;
			}
			a++;
		}

		if (is_matching)
		s++;
	}

	return (count);
}
