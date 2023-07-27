#include "main.h"

/**
 * _strncat - concatenates two strings
 *
 * @dest: the destination string
 * @src: the source string
 * @n: the maximum number of bytes to append from @src
 *
 * this function appends the @src string to the @dest string.
 *
 * Return: a pointer to the resulting string @dest.
 */

char *_strncat(char *dest, char *src, int n)
{
	char *dest_ptr = dest;

	while (*dest_ptr != '\0')
	{
		dest_ptr++;
	}

	while (*src != '\0' && n > 0)
	{
		*dest_ptr = *src;
		dest_ptr++;
		src++;
		n--;
	}

	*dest_ptr = '\0';

	return (dest);
}

