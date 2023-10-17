#include "main.h"
/**
 * printrev - print buffer 
 * @buffer: buffer contains numbers as string.
 * 
*/
void printrev(char *buffer)
{
	int i = _strlen(buffer);
	for (; i > 0; --i)
	_putchar(buffer[i]);
}

/**
 * printint - function to print an integer
 * @args: arguments
 * Return: length of number after converted to string
 */
int printint(va_list args)
{
	int num, num2, i = 0;
	char *buffer;
	num = va_arg(args, int);
	
	if (num == 0)
		return (_putchar('0'));
	buffer = malloc(num);
	num2 = num;
	if (num < 0)
		num *= -1;
	while(num > 0)
	{
		buffer[i++] = '0' + num % 10;
		num /= 10;
	}
	if (num2 < 0 && num2 != 0)
		buffer[i] = '-';
	printrev(buffer);
	free(buffer);
	return (i);
}
/**
 * printbin - function to print numbers in binary format 
 * @arg: argument
 * Return: number of charecter printed.
*/
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