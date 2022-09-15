#include "main.h"

/**
 * main - entry into the code
 * print_alphabet_x10 -prints the alphabet 10 times
 * Return: always zero
 */

void print_alphabet_x10(void)
{
	char a = 'a';
	int n = 10;
	while (n >= 1)
	{
		while (a <= 'z')
		{
			_putchar(a);
			++a;
		}
		--n;
		_putchar(10);
		a = 'a';
	}
}
