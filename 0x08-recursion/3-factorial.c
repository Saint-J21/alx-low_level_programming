#include "main.h"

/**
 * factorial - calculates the factorial of a given number.
 *
 * @n: the number whose factorial is to be calculated.
 *
 * Description:
 * This function recursively calculates the factorial of the non-negative
 * integer 'n'.
 *
 * Return: the factorial of 'n', or -1 in case of an error.
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);

	if (n == 0)
		return (1);

	return (n * factorial(n - 1));
}
