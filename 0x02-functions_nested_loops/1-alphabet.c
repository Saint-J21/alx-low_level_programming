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
putchar((char)letter);
}
putchar('\n');
}
