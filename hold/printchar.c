#include "main.h"
/**
 * printchar - prints the character
 * @c: will return the character
 * Return: will return 1
 */

int printchar(char c)
{
	return (write(1, &c, 1));
}
