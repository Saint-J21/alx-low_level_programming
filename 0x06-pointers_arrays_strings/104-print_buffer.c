#include "main.h"
#include <stdio.h>
#include <ctype.h>

/**
 * print_buffer - prints the content of a buffer
 *
 * @b: the buffer to print
 * @size: the number of bytes to print
 */

void print_buffer(char *b, int size)
{
	int i, j;
	char *c = b;

	if (size <= 0)
	{
		printf("\n")
			return;
	}

	for (i = 0; i < size; i += 10)
	{
		printf("%08x: ", i);

		for (j = 0; j < 10; j++)
		{
			if (i + j < size)
				printf("%02x", *(c + i + j));
			else
				printf(" ");

			if (j % 2 == 1)
				printf(" ");
		}

		for (j = 0; j < 10; j++)
		{
			if (i + j <size)
			{
				if (isprint(*(c + i + j)))
					printf("%c", *(c + i + j));
				else
					printf(".");
			}
		}

		printf("\n");
	}
}
