#include <stdio.h>
/**
 * main - The Alphabet - q and e
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int letter;
for (letter = 'a'; letter <= 'z'; letter++)
{
if (letter != 'q' && letter != 'e')
{
putchar(letter);
}
}
putchar('\n');
return (0);
}
