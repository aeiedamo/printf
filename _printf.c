#include "main.h"
/**
 * _printf - main function of printf project
 * @format: all included formats;
 * Return: length of format.
*/
int _printf(const char *format, ...)
{
	char *empty = "", *perc = "%";
	/*buffer *b = malloc(sizeof(buffer));*/
	va_list args;
	int i;
	int count = 0;

	if (format == NULL || format == empty || format == perc)
		return (-1);

	/*b->l = 0;*/
	va_start(args, format);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			write(1, &format[i], 1);
			count++;
			continue;
		}
		i++;
		if (format[i] == 'c')
		{
			char c = va_arg(args, int);
			write(1, &c, 1);
			count++;
		}
		else if (format[i] == 's')
		{
			char *str = va_arg(args, char *);

			count += write(1, str, _strlen(str));
		}
		
	}
	va_end(args);
	return (count);
}
