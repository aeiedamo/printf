#include "main.h"

/**
 * printString - print a string with non printable charcters
 * @args: arguments
 * Return: length of string
*/

int printString(va_list args)
{
	int count, len;
	char *str;

	str = va_arg(args, char *);
	if (str == NULL)
		str = "(null)";

	len = _strlen(str);
	for (count = 0; count < _strlen(str); count++)
	{
		if (str[count] < 32 || str[count] >= 127)
		{
			_printf("\\x0%X", (int) str[count]);
			len += 4;
		}
		else
		{
			_putchar(str[count]);
		}
	}

	return (len);
}
