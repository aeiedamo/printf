#include "main.h"


/**
 * savestring - to add content of string to the buffer
 * @b: pointer to the buffer
 * @args: arguments
 * Return: new length
*/
buffer *savestring(buffer *b, va_list args)
{
	int i;
	char *str;

	str = va_arg(args, char *);
	if(str == NULL)
	{
		str = "(null)";
	}

	for (i = 0; i < _strlen(str); i++, b->l++)
	b->d[b->l] = str[i];

	return (b);
}

/**
 * saveint - to add int to buffer
 * @b: pointer to the buffer
 * @args: arguments
 * Return: new length
*/

buffer *saveint(buffer *b, va_list args)
{
	int num, i;
	char *num2str;

	num = va_arg(args, int);
	num2str = itoa(num, 10);
	for (i = 0; num2str[i] != '\0'; i++)
	{
		b->d[b->l] = num2str[i];
		b->l++;
	}
	return (b);
}


/**
 * itoa - converts int to string
 * @val: number to convert
 * @base: base of conversion
 * Return: string containing the number
 */

char *itoa(int val, int base)
{
	static char buf[32] = {0};
	int i = 30;

	for (; val && i ; --i, val /= base)
		buf[i] = "0123456789abcdef"[val % base];

	return (&buf[i + 1]);

}
