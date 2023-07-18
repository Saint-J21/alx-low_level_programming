#include "main.h"
/**
*main - putchar
*Return: Always 0.
*/
int main(void)
{
char str[] = "putchar\n";
int i;
for (i = 0; str[i] != '\0'; i++)
{
putchar(str[i]);
}
return (0);
}
