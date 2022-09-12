#include <stdio.h>
/**
 * main - this is the main function
 * Description: putchar function prints the alphabet in lowercase.
 * Return: zero when successful
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
