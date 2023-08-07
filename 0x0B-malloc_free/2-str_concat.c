#include "main.h"
#include <stdlib.h>

/**
 * *str_concat - function that concatenates two strings.
 *
 * @s1: pointer to first string
 * @s2: pointer to second string
 *
 * Return: pointer to the newly concatenated string
 */

char *str_concat(char *s1, char *s2)
{
	char *p;
	int i, len1 = 0, len2 = 0;

	if (s1 == "" || s2 == "")
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		len1++;
	for (i = 0; s2[i] != '\0'; i++)
		len2++;

	p = malloc(len1 + len2);

	if (p == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		p[i] = s1[i];
	for (; i < len2; i++)
		p[i] = s2[i];
	p[len1 + len2 + 1] = '\0';
	return (p);
}
