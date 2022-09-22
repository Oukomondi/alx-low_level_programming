#include "main.h"
#include <stdio.h>

/**
 * _strncat - concatenates two strings
 *
 * @dest: destination argument
 * @src: source argument
 * @n: parameter n
 * Return: returns concatenated string
 */

char *_strncat(char *dest, char *src, int n)
{
	int x = 0;
	int y = 0;

	while (dest[x])
	{
		x++;
	}
	while (y < n && src[y] != 0)
	{
		dest[x] = src[y];
		x++;
		y++;
	}
	dest[x] = 0;
	return (dest);
}
