



#include "main.h"

int _printf(const char *format, ...)
{
	va_list cha;
	int c = 0;

	if (format == NULL)
		return (-1);

	va_start(cha, format);

	while (format)
	{
		if (*format != NULL)
		write(1, format, strlen(format));
		c++;
	}

	return (c);
}
