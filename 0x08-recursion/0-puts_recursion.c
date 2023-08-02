#include "main.h"

/**
 * _puts_recursion - Prints a string followed by a new line.
 *
 * @s: Pointer to the string to be printed.
 *
 * Description:
 * This function prints the characters of the string 's' recursively
 * until the null terminator is encountered, at which point it prints
 * a new line character ('\n') and returns to stop the recursion.
 *
 * Return: void
 */

void _puts_recursion(char *s)
{
if (*s == '\0')
{
_putchar('\n');
return;
}

_putchar(*s);
_puts_recursion(s + 1);
}
