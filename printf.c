



#include "main.h"

int _printf(const char *format, ...)
{
	va_list cha;
	int c;

	if (format == NULL)
		return (-1);

	va_start(cha, format);

/*	while (format)
	{
		if (*format != NULL)
		write(1, format, strlen(format));
		c++;
	}

	return (c);*/
	for (c = 0; c < format; c++)
	{
		if (*format != '%')
			write(1, format, strlen(format));
	}
	return (c);
}
