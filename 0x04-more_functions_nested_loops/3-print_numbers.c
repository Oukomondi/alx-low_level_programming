#include "main.h"

/**
 * print_numbers - Prints numbers from 0 - 9
 */
void print_numbers(void)
{
	int i;

	for (i = '0'; i <= '9'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}
