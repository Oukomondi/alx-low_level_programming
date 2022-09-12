#include <stdio.h>

/**
 * main - main function block
 * Description: the function `putchar` prints all letters but the letter 'q' and 'e'.
 * Return: prints zero when successful 
 */

int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		if (c != 'q' && c != 'e')
			putchar(c);
		c++;
	}
	putchar('\n');

	return (0);
}
