#include "main.h"

/**
 * printstring - function to print a string argument
 * @args: argument
 * Return: Number of elements printed.
 */

int printstring(va_list args)
{
	int count;
	char *str;

	str = va_arg(args, char *);
	if (str == NULL)
		str = "(null)";

	for (count = 0; str[count] != '\0'; count++)
		_putchar(str[count]);

	return (count - 1);
}
