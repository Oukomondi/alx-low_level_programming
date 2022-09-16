#include "main.h"

/**
 * more_numbers - prints numbers 0 to 14
 * Return: 0 always
 */

void more_numbers(void)
{

	int x, y;

	for (y = 0; y < 10; y++)
	{
		for (x = 0; x <= 14; x++)
		{
			if (x > 9)
				_putchar(x / 10 + '0');
			_putchar(x % 10 + '0');
		}
		_putchar('\n');
	}
}
