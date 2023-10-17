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

	switch (c)
	{
		case 'c':
			count += printchar(args);
			break;
		case 's':
			count += printstring(args);
			break;
		default:
			count += _putchar(c);
	}

	return (count);
}
