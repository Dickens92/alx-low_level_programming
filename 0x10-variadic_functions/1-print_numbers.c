#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - A function that prints numbers then a new line.
 * @separator: The string for printing.
 * @n: The count for the integers passed.
 * @...: A variable number  for printing.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list numbs;
	unsigned int index;
	va_start(numbs, n);

	for (index = 0; index < n; index++)
	{
		printf("%d", va_arg(numbs, int));
		if (index != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");
	va_end(nums);
}
