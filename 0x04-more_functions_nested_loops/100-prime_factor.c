#include <stdio.h>
#include <math.h>

/**
 * Function to find the largest prime factor of a given number.
 * @param number The number for which to find the largest prime factor.
 * @return The largest prime factor of the input number.
 */
long long int largestPrimeFactor(long long int number) {
long long int largestPrime = -1;
while (number % 2 == 0) {
largestPrime = 2;
number = number / 2;
}
for (long long int i = 3; i <= sqrt(number); i += 2) {
while (number % i == 0) {
largestPrime = i;
number = number / i;
}
}
if (number > 2)
{
largestPrime = number;
}
return (largestPrime);
}
/**
 * Main function.
 */
int main() {
long long int number = 612852475143;
long long int largestPrime = largestPrimeFactor(number);
printf("%lld\n", largestPrime);
return (0);
}
