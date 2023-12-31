#include "main.h"

/**
 * numlength - Calculate the number of digits in an integer
 * @n: the digit passed
 * Return: the no. of digits
 */

int numlength(int n)
{
	int count = 0;

	if (n == 0)
		return (1);
	while (n != 0)
	{
		n /= 10;
		count++;
	}
	return (count);
}

/**
 * print_int - prints int
 * @n: the int to be printed
 */

void print_int(int n)
{
	if (n < 0)
	{
		printchar('-');
		n = -n;
	}
	if (n / 10 != 0)
		print_int(n / 10);

	printchar(n % 10 + '0');
}

/**
 * handle_d_i - %d and %i speciifiers
 * @list: the va_list
 * Return: the number of cahr printed
 */

int handle_d_i(va_list list, char *buffer, int *buffer_index)
{
	int num_to_print = va_arg(list, int);
	int num_digits = numlength(num_to_print);
	int num = 0;

	if (num_to_print < 0)
	{
		buffer[(*buffer_index)++] = '-';
		num++;
		num_to_print = -num_to_print;
	}
	while (num_to_print / 10 > 0)
	{
		buffer[(*buffer_index)++] = (num_to_print % 10) + '0';
	
		num_to_print /= 10;
	}
	buffer[(*buffer_index)++] = num_to_print + '0';
	num += num_digits;

	return (num);
}
