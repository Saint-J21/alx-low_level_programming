#include <stdio.h>

/**
* main - Entry point for the Fizz-Buzz program
*
* This program prints the numbers from 1 to 100, each followed by a space. For
* numbers divisible by 3, it prints "Fizz" instead of the number. For numbers
* divisible by 5, it prints "Buzz" instead of the number. For numbers that are
* multiples of both 3 and 5, it prints "FizzBuzz".
*
* Result: Always 0 (success)
*/

int main(void)
{
int i;
for (i = 1; i <= 100; i++)
{
if (i % 3 == 0 && i % 5 == 0)
{
printf("FizzBuzz ");
}
else if (i % 3 == 0)
{
printf("Fizz ");
}
else if (i % 5 == 0)
{
printf("Buzz ");
}
else
{
printf("%d ", i);
}
}
printf("\n");
return (0);
}
