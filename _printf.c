#include "main.h"

/**
 * _printf - function to print strings to stdout.
 * @format: string
 *Return: number of charecter printd.
 */

int _printf (const char *format, ...)
{
	int count = 0, index = 0, i, count2 = 0;
	char buffer[MAXBUFFER];
	va_list arg;
	
	if (!format)
		return (-1);

	va_start(arg, format);

	for (i = 0; format[i] != 0; i++)
	{
		if (format[i] != '%')
		{
			buffer[index++] = format[i];
			if (index == MAXBUFFER)
				print_buf(buffer, &index);
			count++;
		}
			
		else
		{
			if (index > 0)
			print_buf(buffer, &index);

			if (format [i + 1] != '\0')
			{
			count2 = HANDLE_FS(format, &i, buffer, arg);			
			count += count2; }
		}
	}

	if (index > 0)
		print_buf(buffer, &index);

	va_end(arg);

	return (count);
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