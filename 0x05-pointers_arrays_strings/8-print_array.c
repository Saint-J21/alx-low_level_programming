#include "main.h"

/**
* print_array - Prints n elements
* @a: Pointer to the array
* @n: Number of elements
*/

void print_array(int *a, int n)
{
	if (a == NULL || n <= 0)
		return;

	for (int i = 0; i < n; i++)
	{
		_putchar('0' + a[i]);

	if (i < n - 1)
		_puts(", ");
	}
_putchar('\n');
}
