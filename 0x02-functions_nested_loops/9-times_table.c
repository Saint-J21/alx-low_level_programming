#include "main.h"
/**
 * times_table - prints the 9 times table
 */
void times_table(void)
{
int row, column;
for (row = 0; row <= 9; row++)
{
for (column = 0; column <= 9; column++)
{
int result = row * column;
if (column != 0)
{
_putchar(',');
_putchar(' ');
}
if (result < 10)
_putchar(' ');
else
_putchar('0' + (result / 10));
_putchar('0' + (result % 10));
}
}
}
