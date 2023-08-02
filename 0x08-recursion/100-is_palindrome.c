#include "main.h"

/**
* _strlen - Returns the length of a string.
*
* @s: Pointer to the string whose length is to be determined.
*
* Return: The length of the string.
*/
int _strlen(char *s)
{
if (*s == '\0')
return (0);

return (1 + _strlen(s + 1));
}

/**
* is_palindrome_recursive - Helper function
*
* @s: Pointer to the string to be checked.
* @start: The starting index of the string.
* @end: The ending index of the string.
*
* Return: 1 if the string is a palindrome, otherwise 0.
*/
int is_palindrome_recursive(char *s, int start, int end)
{
if (start >= end)
return (1);

if (s[start] != s[end])
return (0);

return (is_palindrome_recursive(s, start + 1, end - 1));
}

/**
* is_palindrome - Checks if a string is a palindrome.
*
* @s: Pointer to the string to be checked.
*
* Description:
* This function checks if the input string 's' is a palindrome
* by calling a recursive helper function 'is_palindrome_recursive'.
*
* Return: 1 if 's' is a palindrome, otherwise 0.
*/
int is_palindrome(char *s)
{
int len = _strlen(s);

if (len <= 1)
return (1);

return (is_palindrome_recursive(s, 0, len - 1));
}
