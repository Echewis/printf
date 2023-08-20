



#include "main.h"

int _printf(const char *format, ...)
{
	va_list cha;
	int c = 0;

	if (format == NULL)
		return (-1);

	va_start(cha, format);

	while (format && *format == '\0')
	{
		if (*format != '\0')
		{
		write(1, format, strlen(format));
		c++;
		}
	
	}

	return (c);
/*	for (c = 0; c < format; c++)
	{
		if (*format != '%')
			write(1, format, strlen(format));
	}
	return (c);*/
}
