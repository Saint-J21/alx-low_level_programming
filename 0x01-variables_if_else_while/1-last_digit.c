#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
*main - rework
*Return: Always 0 (Success)
*/
int main(void)
{
int n;
int LDT;
srand(time(0));
n = rand( ) - RAND_MAX / 2;
LDT = n % 10;
if (LDT > 5)
{
printf("Last digit of %d is %d and is greater than 5\n", n, LDT);
}
if (LDT == 0)
{
printf("Last digit of %d is %d and is 0\n", n, LDT);
}
if ((LDT < 6) && (LDT !=0))
{
printf("Last digit of %d is %d and is less than 6 and not 0\n", n, LDT);
}
return (0);
}
