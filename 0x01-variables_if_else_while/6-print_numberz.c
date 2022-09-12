#include <stdio.h>

/**
 * main - code entry point
 *
 * Return: zero for success
 */

int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		putchar(i + '0');
	}
	putchar('\n');

	return (0);
}
