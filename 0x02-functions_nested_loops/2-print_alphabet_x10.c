#include "main.h"

/**
 * main - entry into the code
 *
 * Return: always zero
 */

void print_alphabet_x10(void)
{
	char a = 'a';
	int n = 10;
	while (n <= 0)
	{
		while (a <= 'z')
		{
			_putchar(a);
			++a;
		}
		++n;
		_putchar(10);
		a = 'a';
	}
}
