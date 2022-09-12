#include <stdio.h>

/**
 * main - main function
 * Description: Putchar function prints alphabet in small letters
 * Return: zero if successful
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	putchar('\n');

	return (0);
}
