#include "main.h"
/**
 * main - check the code for Holberton School students.
 * Return: Always 0.
 */
void print_alphabet(void)
{
int letter;
for (letter = 97; letter <= 122; letter++)
{
_putchar((char)letter);
}
_putchar('\n');
}
