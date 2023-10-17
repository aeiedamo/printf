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


int printbin (va_list arg)
{
	unsigned int num;
	char *numstr;
	int len, i;
	num = va_arg(arg, unsigned int);

	if (num == 0)
		return (_putchar('0'));

	numstr = itoa_binary(num);
	for (i = 0; numstr[i] != '\0'; i++, len++)
	_putchar(numstr[i]);

	return (len);
}

/**
 * check_base - print numbers in chosen base.
 * @arg: argument
 * Return: number of charecter printed.

int check_base(int num, int base)
{
	int i = 0, len = 0, check;
	char *numstr;

	if (base == 2)
	{

	}
	else if(base == 8)
	{
	check = is_it_base8(num);
	if (check == 1)
	numstr = itoa((int) num, 16);
	}
	else if(base == 16)
	numstr = itoa((int) num, 16);
	else 
	numstr = itoa((int) num, 10);

	if (num == 0)
	{
		return (_putchar('0'));
	}

	for (i = 0; numstr[i] != '\0'; i++, len++)
		_putchar(numstr[i]);
	return (len);

}
*/