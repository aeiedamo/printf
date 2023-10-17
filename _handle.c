#include "main.h"

/**
 * _handle - to run the proper function to print
 * @c: char to determine the proper function
 * @args: argument
 * Return: number of chars printed
 */

int _handle(char c, va_list args)
{
	int count = 0;
	char per = '%';
	switch (c)
	{
		case '%':
			count += _putchar(per);
			break;
		case 'c':
			count += printchar(args);
			break;
		case 's':
			count += printstring(args);
			break;
		case 'i':
			count += printint(args);
			break;
		case 'd':
			count += printint(args);
			break;
		default:
			count += _putchar('%');
			count += _putchar(c);
	}

	return (count);
}
