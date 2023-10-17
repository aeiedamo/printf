#include "main.h"

/**
 * printint - function to print an integer
 * @args: arguments
 * Return: length of number after converted to string
 */

int printint(va_list args)
{
	int i = 0, len, num;
	char *numstr;

	num = va_arg(args, int);
	numstr = itoa(num, 10);
	len = _strlen(numstr);
	if (num < 0)
	{
		_putchar('-');
		len++;
		for (i = 0; i < len - 1; i++)
                	_putchar(numstr[i]);
	}
	else
	{
		for (i = 0; i < len; i++)
			_putchar(numstr[i]);
	}
	return (len);
}