#include "main.h"

/**
 * _pow_recursion - calculates the value of x reaised to the power of y.
 *
 * @x: the base.
 * @y: the exponent.
 *
 * Description:
 * this function recursively calculates the value of 'x' raised to the power
 * of 'y'.
 *
 * Return: the value of the 'x' raise to the power of 'y', or -1 in case of an error.
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	if (y == 0)
		return (1);

	return (x * _pow_recursion(x, y - 1))
}
