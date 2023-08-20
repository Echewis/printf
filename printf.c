#include "main.h"

int _printf(const char *format, ...)
{
	va_list cha;
	int index = 0;
	char c;

	if (format == NULL)
		return (-1);

	va_start(cha, format);

	while (format && *format == '\0')
	{
		if (*format != '%')
		{
		write(1, format, strlen(format));
		index++;
		}
		else if (*format == 'c')
		{
			c = va_arg(cha, int);	
			write(1, &c, 1);
			index++;
		}
	
	}

	return (index);
/*	for (c = 0; c < format; c++)
	{
		if (*format != '%')
			write(1, format, strlen(format));
	}
	return (c);*/
}
