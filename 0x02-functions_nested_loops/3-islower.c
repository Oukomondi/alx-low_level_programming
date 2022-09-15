#include "main.h"

/**
 * _islower(int c); - checks for lowercase characters

 * @c: the character tr to evaluate
 *
 * Return: 0 if not uppercase and 1 if uppercase
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
