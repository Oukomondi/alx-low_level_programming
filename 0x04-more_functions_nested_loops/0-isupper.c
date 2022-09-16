#include "main.h"

/**
 * _isupper -function checks for uppercase chars
 *
 * @c: The integer argument passed to function.
 *
 * Return: 1 when character is upper and 0 when otherwise.
 */
int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
		return (1);
	else if ((c >= 'a') && (c <= 'z'))
		return (0);
	else
		return (0);
}
