#include "main.h"
/**
 * string_p - will print the string of char
 * @c: is the array to the character string
 * Return: will return list
 */
int string_p(char *c)
{
	int list = 0;

	if (c)
	{
		for (list = 0; c[list] != '\0'; list++)
		{
			printchar(c[list]);
		}
	}
	return (list);
}

