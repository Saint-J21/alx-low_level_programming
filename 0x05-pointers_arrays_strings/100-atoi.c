#include "main.h"
#include <limits.h>

/**
* _atoi - converts a string to an integer.
* @s: pointer to the string.
*
* Return: the converted integer value.
*/

int _atoi(char *s)
{
int sign = 1;
int result = 0;
int i = 0;
int is_negative = 0;

while (s[i] == '-' || s[i] == '+')
{
if (s[i] == '-')
sign *= -1;
i++;
}

if (s[i] == '\0')
return (0);

if (s[i] == '0')
{
result = 0;
return (result);
}

while (s[i] != '\0')
{
if (s[i] >= '0' && s[i] <= '9')
{
if (result > INT_MAX / 10)
{
if (sign == 1)
return (INT_MAX);
else
return (INT_MIN);
}
result = result * 10 + (s[i] - '0');
}
else
{
break;
}
i++;
}

if (sign == -1)
is_negative = 1;

if (is_negative)
return (-result);
else
return (result);
}
