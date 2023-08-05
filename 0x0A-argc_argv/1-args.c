#include <stdio.h>

/**
 * main - entry
 * @argc: the number
 * @argv: an array
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	(void) argv; /*ignore argv*/
	printf("%d\n", argc - 1);

	return (0);
}
