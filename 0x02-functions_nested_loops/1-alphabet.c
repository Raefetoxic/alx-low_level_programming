#include "main.h"

/**
 * print_alphabets - function that prints alphabets
 *
 * Return: 0
*/

int print_alphabets(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');

	return (0);
}
