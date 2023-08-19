#include <stdio.h>

/**
 * _putchar - is a function
 * Return: will return write
 * @a: is the character arg
 */
int _putchar(char a)
{
	return (write(1, &a, 1));
}
