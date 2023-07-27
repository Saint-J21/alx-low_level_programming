#include "main.h"

/**
 * cap_string - capitalizes all words of a string.
 *
 * @str: the input string.
 *
 * Return: a pointer to the resulting string.
 */

char *cap_string(char *str)
{
int capitalize_next = 1;
char *ptr = str;

while (*ptr != '\0')
{
if (*ptr >= 'a' && *ptr <= 'z')
{
if (capitalize_next)
{
*ptr = *ptr - ('a' - 'A');
}
capitalize_next = 0;
}
else if (*ptr == ' ' || *ptr == '\t' || *ptr == '\n'
|| *ptr == ',' || *ptr == ';' || *ptr == '.'
|| *ptr == '!' || *ptr == '?' || *ptr == '"'
|| *ptr == '(' || *ptr == ')' || *ptr == '{'
|| *ptr == '}')
{
capitalize_next = 1;
}
else
{
capitalize_next = 0;
}

ptr++;
}

return (str);
}
