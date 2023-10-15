#include "main.h"
#include <stdio.h>

/**
 * _printf - function to print strings to stdout.
 * @format: string
 *Return: number of charecter printd.
 */

int _printf (const char *format, ...)
{
	int i;
	buf buffer;
	va_list args;

	buffer.len = 0;
	
	if (format == NULL)
		return (-1);

	va_start(args, format);

	for (i = 0; format[i] != 0 && buffer.len < 1024; i++)
	{
		if (format[i] != '%')
			buffer.data[buffer.len++] = format[i];
		else
		{
			i++;
			switch(format[i])
			{
			case 'c':
				buffer.data[buffer.len++] = va_arg(args, int);
				break;
			case '%':
				buffer.data[buffer.len++] = '%';
				break;
			case 's':
				printstring(&buffer, args);
				break;
			}
		}
	}

	va_end(args);

	for(i = 0; i < buffer.len; i++)
		putchar(buffer.data[i]);

	return (buffer.len);
}

/**
* print_buf - print buffer 
*@buffer: the buffer
*@index: track buffer
*/
void print_buf(char buffer[], int *index)
{
	if (*index > 0)
		write(1, buffer, *index);

	*index = 0;
}


buf *printstring(buf *buffer, va_list args)
{
	char *str;
	int i;

	str = va_arg(args, char *);

	for (i = 0; i < (int) strlen(str); i++, buffer->len++)
		buffer->data[buffer->len] = str[i];
	
	return (buffer);
}