#include "main.h"

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
	va_start(args, format);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			buffer.data[buffer.len] = format[i];
			buffer.len++;
		}
		else
		{
			i++;
			switch(format[i])
			{
			case 'c':
				buffer.data[buffer.len] = va_arg(args, int);
				buffer.len++;
				break;
			case '%':
				buffer.data[buffer.len] = '%';
				buffer.len++;
				break;
			case 's':
				printstring(&buffer, args);
				break;
			default:
				break;

			}
		}
	}

	va_end(args);
	write(1, &buffer.data, buffer.len);
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

	for (i = 0; i < _strlen(str); i++, buffer->len++)
		buffer->data[buffer->len] = str[i];
	
	return (buffer);
}