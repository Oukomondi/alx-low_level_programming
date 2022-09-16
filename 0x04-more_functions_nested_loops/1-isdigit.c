#include "main.h"

/**
 * _isdigit - function that prints digits
 *
 * @c: int arg passed into the function
 *
 * Return: print 1 when c is a digit and 0 when otherwise
 */
int _isdigit(int c)
{
	if ((c >= '0') && (c <= '9'))
		return (1);
	else
		return (0);

	return (0);
}
