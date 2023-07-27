#include "main.h"

/** _strcpy - copies a string
 *
 * @dest: the destination
 * @src: the destination buffer
 * @n: The maximum number if characters to copy
 *
 * this fucntion copies at most @n character from the @src string to the 
 * @dest buffer.
 *
 * Return: a pointer to the resulting string @dest
 */

char *_strcpy(char *dest, const char *src, int n)
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