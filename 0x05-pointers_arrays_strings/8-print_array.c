#include "main.h"
#include <stdio.h>

/**
 * print_array - Prints n elements of an array of integers.
 * @a: Pointer to the array of integers.
 * @n: Number of elements to be printed.
 */
void print_array(int *a, int n)
{
int i;

if (a == NULL || n <= 0)
return;

for (i = 0; i < n; i++)
{
	printf("%d", a[i]);
	if (i < n - 1)
		printf(", ");
}
printf("\n");
}

int main(void)
{
	int arr[] = {1, 2, 3, 4, 5};
	int n = sizeof(arr) / sizeof(arr[0]);

	print_array(arr, n);

	return (0);
}
