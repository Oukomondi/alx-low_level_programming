#include "main.h"

/**
 * print_diagonal - function draws a diagonal
 * @n: The number of \ characters to be printed.
 */
void print_diagonal(int n)
{
	int i, spc;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (spc = 0; spc < i; spc++)
				_putchar(' ');
			_putchar('\\');

			if (i == n - 1)
				continue;

			_putchar('\n');
		}
	}

	_putchar('\n');
}
