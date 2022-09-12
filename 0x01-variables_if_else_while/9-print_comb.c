#include <stdio.h>

/**
 * main - Starting point
 *
 * Return: 0 indicates success
 */

int main(void)
{

	int a;

	for (a = 0; a < 10; a++)
	{
		putchar(a + '0');
		if (a == 9)
			continue;
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
