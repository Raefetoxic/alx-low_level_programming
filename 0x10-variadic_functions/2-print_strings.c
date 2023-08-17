#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - function that prints strings, followed by a new line.
 *
 * @separator: pointer to a string of separators
 * @n: number of variadic params
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	va_start(args, n);
	separator = separator == NULL ? "" : separator;
	for (i = 0; i < n - 1; i++)
	{
		if (va_arg(args, char*) == NULL)
			printf("nil");
		else
			printf("%s%s", va_arg(args, char*), separator);
	}
	printf("%s\n", va_arg(args, char*));
	va_end(args);
}