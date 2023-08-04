#include <stdio.h>

/**
 * main - entry
 * @argc: the number
 * @argv: an array
 *
 * Description:
 * - The main function calculates the number of command-line arguments passed
 * to the program (excluding the program name itself) and prints the result.
 * The unused __attribute__ is used to inform the compiler that the argc and
 * argv parameters are intentionally left unused in this program.
 *
 * Return: Always 0 (Success)
 */

int main(int __attribute__((unused)) argc,
		char __attribute__((unused)) *argv[])
{
	printf("%d\n", argc - 1);

	return (0);
}
