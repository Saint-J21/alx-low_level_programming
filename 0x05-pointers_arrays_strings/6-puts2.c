#include "main.h"

/**
* puts2 - Prints every other character.
* @str: pointer of the string.
*/

void puts2(char *str)
{
	int i = 0;
	int length = 0;
	
	while (str[length] != '\0')
        length++;

    while (i < length)
    {
        if (i % 2 == 0)
            _putchar(str[i]);
        i++;
    }

    _putchar('\n');
}
