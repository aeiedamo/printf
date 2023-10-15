#include "main.h"

/**
 * _printf - main function of printf project
 * @format: all included formats;
 * Return: length of format.
*/
int _printf(const char *format, ...)
{
	buffer b;
	int i;
	va_list args;

	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);
	b.l = 0;
	va_start(args, format);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] == '%')
		{
			i++;
			_handle(&b, args, format[i]);
		}
		else
		{
			b.d[b.l] = format[i];
			b.l++;
		}
	}
	va_end(args);
	write(1, &b.d, b.l);
	return (b.l);
}
