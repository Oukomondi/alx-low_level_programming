#include "main.h"

/**
 * _abs -checks for absolute value of int
 *
 * @n: the parameter executible character
 *
 * Return: 0 to return the absolute value
 * of an inter
 */

int _abs(int n)
{
	if (n > 0)
	{
		return (n);
	}
	else if (n == 0)
	{
		return (0);
	}
	else
	{
		return (-n);
	}
}
