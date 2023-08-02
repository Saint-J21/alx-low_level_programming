#include "main.h"

/**
 * find_sqrt - helper function
 *
 * @n: number that is calculated
 * @start: the starting value
 * @end: the ending
 *
 * Return: the square root
 */

int find_sqrt(int n, int start, int end)
{
	int mid;

	if (start <= end)
	{
		mid = (start + end) / 2;
		if ((mid * mid) == n)
			return (mid);
		else if ((mid * mid) > n)
			return (find_sqrt(n, start, mid - 1));
		else
			return (find_sqrt(n, mid + 1, end));
	}
	return (-1);
}

/**
 * _sqrt_recursion - returns 
 *
 * @n: the number to be calculated.
 *
 * Description:
 * This function recursively calculates.
 *
 * Return: the natural square root
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	if (n == 0 || n == 1)
		return (n);

	return (find_sqrt(n, 0, n));
}
