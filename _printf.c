#include "main.h"

/**
 * _printf - main function of printf project
 * @format: all included formats;
 * Return: length of format.
*/
int _printf(const char *format, ...)
{
	buffer b;
	int i, count = 0;
	va_list args;

	if (!format)
	return (-1);

	b.l = 0;
	va_start(args, format);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			if (b.l >= 100023)
			{
				count += b.l;
				b.d[b.l] = '\0';
				write(1, &b.d, b.l);
				b.l = 0;

			}
		b.d[b.l++] = format[i];
		}
		else
		{
			i++;
		_handle(&b, args, format[i], &i);
		}
	}
	va_end(args);
	if (b.l > 0)
	{
		b.d[b.l] ='\0';
		count += b.l;
		write(1, &b.d, b.l);
	}
	return(count);
}
