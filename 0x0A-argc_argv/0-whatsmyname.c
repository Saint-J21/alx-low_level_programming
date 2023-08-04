#include <stdio.h>

/**
 * main - entry
 * @argc: the number
 * @argv: an array
 * @__attribute__: unused
 *
 * Description:
 * - main function: Prints the name of the progra
 * - __attribute__: GCC ext
 *
 * Return: Always 0 (Success)
 */

int main(int __attribute__((unused)) argc,
	char __attribute__((unused)) *argv[])

{
	char *program_name = argv[0];

	printf("%s\n", program_name);

	return (0);
}
