#include "main.h"

/**
 * printchar - to print char argument
 * @args: arguments.
 * Return: 1
 */

int printchar(va_list args)
{
	char c;

	c = va_arg(args, int);
	return (_putchar(c));
}
