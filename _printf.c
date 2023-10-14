#include "main.h"

/**
 * _printf - function to print strings to stdout.
 * @format: string
 *Return: number of charecter printd.
 */

int _printf (const char *format, ...)
{
int count = 0, index = 0, i = 0, count2 = 0;
char buffer[MAXBUFFER];
va_list arg;
va_start(arg, format);

if (!format)
	return (-1);

	while (format[i] != '\0')
	{
		if (format[i] != '%')
		{
		buffer[index++] = format[i];
		if (index == MAXBUFFER)
		print_buf(buffer, &index);
		++count;
		}
		else
		{
		print(buffer, index);
		count2 = HANDLE_FS(format, i, buffer, index, va_list arg);

		count += count2; 
		}
				++i;
	}

		if (index > 0)
		print_buf(buffer, index);


return (count);
}

/**
* print_buf - free buffer 
*@buffer: the buffer
*@index: track buffer
*/
void print_buf(char buffer[], int *index)
{
if (*index > 0)
write(1, buffer, index);

*index = 0;
}
 
