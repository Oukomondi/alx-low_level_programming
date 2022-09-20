#include "main.h"
#include <string.h>

/**
* puts2 - Function prints every character in a string
*	-starting with first character followed by
*	-new line
*
* @str: string parameter to be passed nto arg
*/
void puts2(char *str)
{
	int len, i;

	len = strlen(str);
	for (i = 0; i < len; i += 2)
		_putchar(str[i]);
	_putchar('\n');
}
