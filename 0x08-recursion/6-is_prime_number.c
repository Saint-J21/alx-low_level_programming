#include "main.h"
/**
 * is_prime_recursive - helper function
 *
 * @n: the number
 * @divisor: current divisor
 *
 * Return: 1 if prime, else 0/
 */

int is_prime_recursive(int n, int divisor)
{
	if (divisor == 1)
		return (1);

	if (n % divisor == 0)
		return (0);

	return (is_prime_recursive(n, divisor - 1));
}

/**
 * is_prime_number - checks for primes
 * 
 * @n: the number
 *
 * Description:
 * this function checks if the input integer is a prime number
 *
 * Return: 1 if prime, else 0.
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);

	return (is_prime_recursive(n, n - 1));
}
