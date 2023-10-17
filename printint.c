#include "main.h"

/**
 * printint - function to print an integer
 * @args: arguments
 * Return: length of number after converted to string
 */

int printint(va_list args)
{
	int i = 0, len = 0, num;
	char *numstr;

	num = va_arg(args, int);
	numstr = itoa((int) num, 10);
	if (num == 0)
	{
		return (_putchar('0'));
	}

	if (num < 0 && num != 0)
	{
		_putchar('-');
		len++;
	}
	for (i = 0; numstr[i] != '\0'; i++, len++)
		_putchar(numstr[i]);
	return (len);
}

int printbinary (va_list arg)
{
	int i = 0, len = 0;
	unsigned int num;
	char *numstr;

	num = va_arg(arg, unsigned int);
	numstr = itoa((unsigned int) num, 2);
	if (num == 0)
	{
		return (_putchar('0'));
	}

	for (i = 0; numstr[i] != '\0'; i++, len++)
		_putchar(numstr[i]);
	return (len);

}