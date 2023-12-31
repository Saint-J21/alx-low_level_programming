#include "main.h"

/**
 * leet - encodes a string into 1337.
 *
 * @str: the input string.
 *
 * Return: a pointer to the resulting string.
 */

char *leet(char *str)
{
	char *leet_chars = "aeotlAEOTL";
	char *leet_replacements = "4307143071";
	int i, j;

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; leet_chars[j] != '\0'; j++)
		{
			if (str[i] == leet_chars[j])
			{
				str[i] = leet_replacements[j];
				break;
			}
		}
	}
	return (str);
}
