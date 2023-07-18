#include "main.h"
/**
*main - putchar
*Return: Always 0.
*/
void print_alphabet(void)
{
int i;
for (i = 0; i < 26; i++)
{
_putchar('a' + i);
}
_putchar('\n');
}
