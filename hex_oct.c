#include "main.h"

/**
 * printoct - function to print octal integers
 * @args: arguments
 * Return: number of arguments printed
*/

int printoct(va_list args)
{
	unsigned int num;
	char *numstr;
	int i, len = 0;

	num = va_arg(args, unsigned int);
	if (num == 0)
		return (_putchar('0'));

	numstr = utoa(num, 8);
	for (i = 0; numstr[i] != '\0'; i++, len++)
		_putchar(numstr[i]);
	return (len);
}

/**
 * printhex - function to print hexdecimal integers
 * @args: arguments
 * @c: to check if to output with capital or small letters
 * Return: number of arguments printed
*/

int printhex(va_list args, char c)
{
	unsigned int num;
	char *numstr;
	int i, len = 0;

	num = va_arg(args, unsigned int);
	if (num == 0)
		return (_putchar('0'));

	if (c == 'x')
		numstr = utoa(num, 16);
	else if (c == 'X')
		numstr = utoaX(num, 16);
	for (i = 0; numstr[i] != '\0'; i++, len++)
		_putchar(numstr[i]);
	return (len);
}
