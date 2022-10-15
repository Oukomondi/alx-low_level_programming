#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * sum_them_all - Returns the sum of all its parameters.
 * @n: The number of parameters passed to the function.
 * @...: A variable number of paramters to calculate the sum of.
 *
 * Return: If n == 0 - 0.
 *         Otherwise - the sum of all parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ah;
	unsigned int i, sum = 0;

	va_start(ah, n);

	for (i = 0; i < n; i++)
		sum += va_arg(ah, int);

	va_end(ah);

	return (sum);
}
