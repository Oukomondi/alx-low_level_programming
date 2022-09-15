#include "main.h"

/**
 * int _islower(int c); - checks for lowercase characters
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
