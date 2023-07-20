#include <stdio.h>
#include <math.h>
#include "main.h"

/**
 * largest_prime_factor - Finds the largest prime factor of a given number
 * @num: The number to find the largest prime factor for
 *
 * Return: The largest prime factor
 */
long largest_prime_factor(long num)
{
long largest_prime = -1;

// Divide by 2 to remove all even factors
while (num % 2 == 0)
{
largest_prime = 2;
num /= 2;
}

// Check for odd prime factors
for (long i = 3; i <= sqrt(num); i += 2)
{
while (num % i == 0)
{
largest_prime = i;
num /= i;
}
}

// If the remaining number is a prime greater than 2
if (num > 2)
largest_prime = num;

return (largest_prime);
}

int main(void)
{
long num = 612852475143;
long result = largest_prime_factor(num);

print_number(result);
_putchar('\n');
return (0);
}
