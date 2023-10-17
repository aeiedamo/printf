#include "main.h"

/**
 * printint - function to print an integer
 * @args: arguments
 * Return: length of number after converted to string
 */
int printint(va_list args)
{
	int num = va_arg(args, int);
	int tmp, d, col = 1;
	int tmp2 = num % 10;
	int i = 1;

	num /= 10;
	tmp = num;

	if (tmp2 < 0)
	{
		_putchar('-');
		num *= -1;
		tmp *= -1;
		tmp2 *= -1;
		i++;
	}
	if (tmp > 0)
	{
		while (tmp / 10 != 0)
		{
			col *= 10;
			tmp /= 10;
		}
		tmp = num;
		while (col > 0)
		{
			d = tmp / col;
			_putchar(d + '0');
			tmp = tmp - (d * col);
			col /= 10;
			i++;
		}
	}
	_putchar(tmp2 + '0');
	return (i);
}
/**
 * printbin - function to print numbers in binary format.
 * @arg: argument.
 * Return: number of charecter printed.
 */
int printbin(va_list arg)
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

/**
 * printunsign - print unsigned int
 * @arg: argument.
 * Return: number of charecter printed.
*/
int printunsign(va_list arg)
{
	unsigned int num;
	char *numstr;
	int i, len = 0;

	num = va_arg(arg, unsigned int);
	if (num == 0)
		return (_putchar('0'));

	numstr = utoa(num, 10);
	for (i = 0; numstr[i] != '\0'; i++, len++)
		_putchar(numstr[i]);
	return (len);
}
