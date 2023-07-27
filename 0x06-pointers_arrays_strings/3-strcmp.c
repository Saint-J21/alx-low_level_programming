#include "main.h"

/**
 * _strcmp - compares tow strings
 *
 * @s1: the first string
 * @s2: the second string
 *
 * This function compare the two strings @s1 and @s2. It returns an
 * integer value less than, equal to, or greater than 0 if @s1 is found
 * to be less than, equal to, or greater than @s2, respectively.
 *
 * Return: an integer value less than, equal to, or grreater than 0.
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s2 != '\0')
	{
		if (*s1 != *s2)
		{
			return (*s1 - *s2);
		}
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
