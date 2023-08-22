#include "main.h"

/**
 * _printf - This will work as a normal printf
 * @format: this will store the variable of array
 * Return: It will return num
 */

int _printf(const char *format, ...)
{
	unsigned int x, num = 0;

	va_list list;

	va_start(list, format);

	for (x = 0; format[x] != '\0'; x++)
	{
		if (format[x] != '%')
		{
			printchar(format[x]);
		}
		else if (format[x + 1] == 's')
		{
			unsigned int string;

			string = string_p(va_arg(list, char *));
			x++;
			num += (string - 1);
		}
		else if (format[x + 1] == 'c')
		{
			printchar(va_arg(list, int));
			x++;
		}
		else if (format[x + 1] == '%')
		{
			printchar('%');
		}
	}
	va_end(list);
	return (num);
}
