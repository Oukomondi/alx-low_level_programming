#include "main.h"
#include <stdio.h>

/**
 * _puts - Function prints string.
 *
 * @str: String to be printed out.
 */
void _puts(char *str)
{
	while (*str)
		_putchar(*str++);

	_putchar('\n');
}
