#include "main.h"

/**
 * _printf - main function of printf project
 * @format: all included formats;
 * Return: length of format.
*/
int _printf(const char *format, ...)
{
	char *empty = "", *perc = "%";
	buffer b;
	int i, count = 0;
	va_list args;

	if (!format || format == NULL || format == empty || format == perc)
		return (-1);

	b.l = 0;
	va_start(args, format);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			b.d[b.l++] = format[i];
		}
		else
		{
			i++;
			_handle(&b, args, format[i], &i);
		}
	}
	va_end(args);
	write(1, &b.d, b.l);
	return(b.l);
}
