#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
* main - Last digit of a random number
* Return: Always 0 (Success)
*/
int main(void)
{
int n;
int LDT;
srand(time(0));
n = rand() % 100;
LDT = n % 10;
if (LDT > 5)
{
printf("Last digit of %d is %d and is greater than 5\n", n, LDT);
}
else if (LDT == 0)
{
printf("Last digit of %d is %d and is 0\n", n, LDT);
}
else
{
printf("Last digit of %d is %d and is less than 6 and not 0\n", n, LDT);
}
return (0);
}
