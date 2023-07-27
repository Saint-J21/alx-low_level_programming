#include "main.h"

/**
 * _strncpy - copies a string
 *
 * @dest: the destination
 * @src: the destination buffer
 * @n: the maximum number if characters to copy
 *
 * this function copies at most @n character from the @src string to the
 * @dest buffer.
 *
 * Return: a pointer to the resulting string @dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	for (; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
