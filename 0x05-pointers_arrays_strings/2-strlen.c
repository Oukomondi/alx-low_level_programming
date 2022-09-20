#include "main.h"

/**
 * _strlen - Calcualtes the length of a string.
 *
 * @n : parameter that is passed into an argument.
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
