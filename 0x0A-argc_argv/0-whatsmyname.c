#include <stdio.h>

/**
 * main - entry
 * @argc: the number
 * @argv: an array
 *
 * Return: Always 0 (Success)
 */

int main(int argc __attribute__((unused)), char *argv[])

{
	char *program_name = argv[0];

	printf("%s\n", program_name);

	return (0);
}
