#include "main.h"

/**
 * _memset - Fills first @n bytes of memory area
 *	     pointed by @s witha constant byte @b.
 *
 * @s: Pointer to memory area to be filled.
 * @b: The constant character to fill memory area.
 * @n: Number of bytes to be filled.
 *
 * Return: Pointer to filled memory area.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}

	return (s);
}
