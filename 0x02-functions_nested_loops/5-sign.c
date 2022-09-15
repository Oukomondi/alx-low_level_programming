#include "main.h"
/**
 * print_sign - function assigns signs
 *
 *@s: character to manipulate
 *
 * Return: 1 is n is +ve, 0 if 0 and -1 if -ve
 */

int print_sign (int s)
{
	if (s > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (s == 0)
	{
		_putchar ('0');
		return (0);
	}
	else
	{
		_putchar ('-');
		return (-1);
	}
}
