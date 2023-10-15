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
	funs func[] = {
		{'s', savestring}
	};
	int cnt_func = 1; /*number of functions*/
	int temp;
	

	if (format == NULL || (format[0] == '%' && format[1] == 0))
		return (-1);
	b.l = 0;
	va_start(args, format);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			b.d[b.l] = format[i];
			b.l++;
		}
		else
		{
			i++;
			switch(format[i])
			{
			case '%':
			case 'c':
				b.d[b.l] = format[i];
				b.l++;
				break;
			default:
				temp = 0;
				while (temp < cnt_func)
				{
					if (format[i] == func[temp].cmp)
						func[temp].fun(&b, args);
					temp++;
				}
				break;
			}
		}
	}
	va_end(args);
	write(1, &b.d, b.l);
	return (b.l);
}