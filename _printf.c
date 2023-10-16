#include "main.h"
/**
 * _printf - main function of printf project
 * @format: all included formats;
 * Return: length of format.
*/
int _printf(const char *format, ...)
{
	buffer b;
	va_list args;
	int i = 0;

	if (format == NULL)
		return (-1);

	va_start(args, format);
	do
	{
		if (format[i] != '%')
			_handle(&b, args, format[++i]);
		else
			b.d[b.l++] = format[i];
		i++;
	} while (format[i] != '\0');
	va_end(args);
	write(1, b.d, b.l);
	return (b.l);
}
