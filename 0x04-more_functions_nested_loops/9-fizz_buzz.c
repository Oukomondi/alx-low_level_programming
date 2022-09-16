#include <stdio.h>

/**
 * main - function prints numbers from 0 to 100
 *        if number is multiple of three print Fizz
 *        if number is a multiple of five print Buzz
 *        if number is a multiple of 5 and 3 print FizzBuzz
 */

int main(void)

{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if ((i % 3) == 0 && (i % 5) == 0)
			printf("FizzBuzz");

		else if ((i % 3) == 0)
			printf("Fizz");

		else if ((i % 5) == 0)
			printf("Buzz");

		else
			printf("%d", i);

		if (i == 100)
			continue;
		printf(" ");
	}

	printf("\n");

	return (0);
}
