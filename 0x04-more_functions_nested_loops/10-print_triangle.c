#include "main.h"

/**
* _putchar - prints a character to the standard output.
* @c: the character to be printed.
*
* Return: Always 0.
*/
void print_triangle(int size)
{
if (size <= 0)
{
_putchar('\n');
return;
}
for (int i = 1; i <= size; i++)
{
for (int j = 1; j <= size - i; j++)
{
_putchar(' ');
}
for (int k = 1; k <= i; k++)
{
_putchar('#');
}
_putchar('\n');
}
}

int main(void)
{
int size = 5;
print_triangle(size);
return (0);
}
