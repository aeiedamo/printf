#include "main.h"

/**
 * printint - function to print an integer
 * @args: arguments
 * Return: length of number after converted to string
 */
int printint(va_list args)
{
	int i, len = 0, num;
	char *numstr;
	num = va_arg(args, int);
	
	if (num == 0)
	{
		return (_putchar('0'));
	}

	numstr = itoa(num, 10);

	if (num < 0 && num != 0)
	{
		_putchar('-');
		len++;
	}
	for (i = 0; numstr[i] != '\0'; i++, len++)
		_putchar(numstr[i]);
	return (len);
}

int printbin (va_list arg)
{
	unsigned int num;
	char *numstr;
	int len = 0, i;
	num = va_arg(arg, unsigned int);

	if (num == 0)
		return (_putchar('0'));

	numstr = itoa_binary(num);
	for (i = 0; numstr[i] != '\0'; i++, len++)
	_putchar(numstr[i]);

	return (len);
}

int printunsign(va_list arg)
{
	unsigned int num;
	char *numstr;
	int i, len = 0;
	num = va_arg(arg, unsigned int);

	if (num == 0)
	{
		return (_putchar('0'));
	}
	numstr = itoao(num, 10, 1);

	for (i = 0; numstr[i] != '\0'; i++, len++)
		_putchar(numstr[i]);
	
	return (len);
}