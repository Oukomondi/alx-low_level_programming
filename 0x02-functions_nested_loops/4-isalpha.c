#include "main.h"
/**
 * _isalpha - checks if a letter or not
 *
 * @c: variable to evaluate
 *
 * Return: return 1 if a letter and 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
