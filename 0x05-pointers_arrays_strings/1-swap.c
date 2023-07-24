#include "main.h"

/**
*swap_int - Swaps values of two integers.
*@a: Pointer to the first integer.
*@b: Pointer to the second integer.
*
*Description: Don't swap horses in crossing a stream.
*/

void swap_int(int *a, int *b)
{
int temp = *a;
*a = *b;
*b = temp;
}
