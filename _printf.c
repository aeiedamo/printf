#include "main.h"
#include <stdio.h>

#define MULTI_LINE_STRING(a) #a

/**
 * _printf - main function of printf project
 * @format: all included formats;
 * Return: length of format.
*/
int _printf(const char *format, ...)
{
	va_list args;
	int i;
	int count = 0;


	if (format == NULL)
		return (-1);

	va_start(args, format);

	for (i = 0; i < _strlen(format); i++)
        {
                if (format[i] == '%')
		{
			i++;
			if (format[i] == 'c')
			{
				char c = va_arg(args, int);

				putchar(c);
				count++;
			}
			else if (format[i] == 's')
			{
				char *str = (va_arg(args, char *));

				puts(str);
				count += strlen(str);
			}
			else
				 putchar(format[i]);
		}
		else
			putchar(format[i]);
        }
	/*for (i = 0; i < _strlen(format); i++)
	{
		if (format[i] == '%')
			_handle(&b, args, format[++i]);
		else
			b.d[b.l++] = format[i];
	}*/
	return (0);
}
