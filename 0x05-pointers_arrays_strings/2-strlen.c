#include "main.h"

/**
 * _strlen - FUnction that calcualtes the length of a string.
 *
 * @c : parameter that is passed into an argument.
 * Return: returns the length of @n.
 */

int _strlen(char *n)
{
	int len = 0;

	while (*n++)
	{
		len++;
	}

	return (len);
}
