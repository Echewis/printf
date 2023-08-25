#include "main.h"

int handle_d_i(va_list list, char *buffer, int *buffer_index);
/**
 * _printf - This will work as a normal printf
 * @format: this will store the variable of array
 * Return: It will return num
 */

int _printf(const char *format, ...)
{
	unsigned int x, num = 0;
	char buffer [1024];
	int buffer_index = 0;
	va_list list;

	if (format == NULL)
	{
		return (-1);
	}
	va_start(list, format);

	for (x = 0; format[x] != '\0'; x++)
	{
		if (format[x] != '%')
		{
			buffer[buffer_index++] = format[x];
			if (buffer_index == 1024)
			{
				write(1, buffer, buffer_index);
				num += buffer_index;
				buffer_index = 0;
			}
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
			buffer[buffer_index++] = va_arg(list, int);
			{
				write(1, buffer, buffer_index);
				num += buffer_index;
				buffer_index = 0;
			}
			x++;
		}
		else if (format[x + 1] == 'd' || format[x + 1] == 'i')
		{
			num += handle_d_i(list, buffer, &buffer_index);
			x++;
		}
		else if (format[x + 1] == '%')
		{
			buffer[buffer_index++] = '%';
			if (buffer_index == 1024)
			{
				write(1,buffer, buffer_index);
				num += buffer_index;
				buffer_index = 0;
			}
			x++;
		}
	}
	if (buffer_index > 0)
	{
		write(1,buffer, buffer_index);
		num += buffer_index;
	}
	va_end(list);
	return (num);
}
