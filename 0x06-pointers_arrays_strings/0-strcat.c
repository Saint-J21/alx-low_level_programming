#include "main.h"

/**
 * _strcat - concatenates two strings
 *
 * @dest: the destination string
 * @src: the source string
 *
 * This function appends the @src string to the @dest string
 *
 * Return: a pointer to the resulting string @dest.
 * */

char *_strcat(char *dest, const char *src)
{
	char *dest_ptr = dest;

	while (*dest_ptr != '\0')
	{
		dest_ptr++;
	}

	while (*srec != '\0')
	{
		*dest_ptr = *src;
		dest_ptr++;
		src++;
	}

	*dest_ptr = '\0';

	return (dest);
}
