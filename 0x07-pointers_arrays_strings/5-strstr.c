#include "main.h"
#include <stddef.h>

/**
 * _strstr - locates a substring
 *
 * @haystack: pointer to the string to be searched
 * @needle: pointer to the substing to be located
 *
 * Return: a pointer to the beginning
 */

char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
		char *h = haystack;
		char *n = needle;

		while (*n && *h == *n)
		{
			h++;
			n++;
		}

		if (*n == '\0')
			return (haystack);

		haystack++;
	}

	return (NULL);
}
