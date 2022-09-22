#include "main.h"

/**
 * _strcat - Concatenates two strings
 *@src: the first string
 *@dest: the second string
 * Return: returns a combination of str1 and str2
 */

char *_strcat(char *dest, char *src)
{
	int len = 0, i;

	while (dest[len])
		len++;

	for (i = 0; src[i] != 0; i++)
	{
		dest[len] = src[i];
		len += 1;
	}
	dest[len] = '\0';
	return (dest);
}
