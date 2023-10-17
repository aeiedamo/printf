#include "main.h"

/**
 * _printf - a function that produces output according to a format.
 * @format: format string to be processed
 * Return: number of chars printed.
 */

int _printf(const char *format, ...)
{
	int i, count = 0;
	va_list args;

	if (format == NULL || format[0] == '\0')
		return (-1);

	if (format[0] == '%' && format[1] == '\0')
		return (-1);

	va_start(args, format);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
			count += _putchar(format[i]);
		else
			count += _handle(format[++i], args);
			if (count < 0)
			return (-1);
	}

	va_end(args);
	return (count);
}
