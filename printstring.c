#include "main.h"

/**
 * printstring - function to print a string argument
 * @args: argument
 * Return: Number of elements printed.
 */

int printstring(va_list args)
{
	int count, len;
	char *str;

	str = va_arg(args, char *);
	if (str == NULL)
		str = "(null)";

	len = _strlen(str);
	for (count = 0; count < len; count++)
		_putchar(str[count]);

	return (len);
}
