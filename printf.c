#include "main.h"
/**
 * _printf - is the fuction
 * @format: This is the argument
 * Return: This will return cad
 */
int _printf(const char *format, ...)
{
	va_list cha;
	char cad = 0;

	if (format == NULL)
		return (-1);

	va_start(cha, format);

	while (*format)
	{
		if (*format != '%')
		{
			write(1, format, 1);
			cad++;
		}
		else
		{

		format++;

		if (*format == '\0')
			break;
		if (*format == '%')
		{
		write(1, format, strlen(format));
		cad++;
		}
		else if (*format == 'c')
		{
			char c = va_arg(cha, int);

			write(1, &c, 1);
			cad++;
		}
		else if (*format == 's')
		{
			char *str = va_arg(cha, char*);
			int len = 0;
		/* strlen can work here as well */
		while (str[len] != '\0')
			len++;
		write(1, str, len);

		cad += len;
		}
	}
	format++;
}

	va_end(cha);
	return (cad);
}
