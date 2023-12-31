#include "main.h"

/**
 * infinite_add - adds two numbers represented as strings
 *
 * @n1: first number as a string
 * @n2: second number as a string
 * @r: buffer to store the result
 * @size_r: size of the buffer.
 *
 * Return: pointer to the result or 0 if the result cannot fit in the buffer.
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len1 = 0, len2 = 0, carry = 0, sum = 0;
	int i, j, k;

	while (n1[len1] != '\0')
		len1++;

	while (n2[len2] != '\0')
		len2++;

	if (len1 + len2 + 1 > size_r)
		return (0);

	i = len1 - 1;
	j = len2 - 1;
	k = 0;

	while (i >= 0 || j >= 0 || carry)
	{
		int num1 = (i >= 0) ? (n1[i] - '0') : 0;
		int num2 = (j >= 0) ? (n2[j] - '0') : 0;

		sum = num1 + num2 + carry;

		carry = sum / 10;
		r[k] = (sum % 10) + '0';

		k++;
		i--;
		j--;
	}

	for (i = 0, j = k - 1; i < j; i++, j--)
	{
		char temp = r[i];

		r[i] = r[j];
		r[j] = temp;
	}

	r[k] = '\0';
	return (r);
}
