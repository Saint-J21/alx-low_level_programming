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
 * Return: the value 'x' raise to the power of 'y'.
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	if (y == 0)
		return (1);

	return (x * _pow_recursion(x, y - 1));
}
