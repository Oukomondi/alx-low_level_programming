#include <stdio.h>

/**
 *main - entry into the program 
 *
 * Return: prints number 1 to 100
 * print Fizz for multiples of 3
 * print Buzz for multiples of 5
 * print FizzBuzz for multiples of 5 & 3
 */

int main (void)
{
	int n;
	for (n = 0; n < 100; n++)
	{
		if ((n % 3) == 0)
		{
		printf("Fizz");
		}
		else if ((n % 5) == 0)
		{
			printf("Buzz");
		}
		else if ((n % 3) == 0 && (n % 5) == 0)
		{
			printf("FizzBuzz");
		}
		else 
		{
			printf("%d", n);
		}

		if (n == 100)
			continue;
		printf(" ");
	}

	printf ("\n");

	return (0);
}
