#include "main.h"

/**
 * set_string - sets the value of a pointer to a char
 *
 * @s: pointer to a pointer that will be updated.
 * @to: pointer to the char array whose address will be stored in s.
 */

void set_string(char **s, char *to)
{
	*s = to;
}
