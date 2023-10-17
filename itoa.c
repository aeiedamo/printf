#include "main.h"


 /**
  *itoa - converts integer to string
 * @val: integer value
 * @base: base system to use
 * Return: integer string
 */
char *itoa(int val, int base)
{
	static char buf[32] = {0};
	int i = 30;

	if (val < 0)
		val *= -1;
	for (; val && i ; --i, val /= base)
		buf[i] = "0123456789abcdef"[val % base];
	return (&buf[i + 1]);
}

/**
 *itoa_binary - convert number to base 2 and make string from that number.
 *@val: number to be converted.
 * return: buffer contain the string.
*/
char *itoa_binary(unsigned int val)
{
	static char buf[64] = {0};
	int i = 62;

	if (val == 0)
	{
		buf[i--] = '0';
	}
	else
	{
		for (; val && i; --i, val /= 2)
		{
			buf[i] = '0' + (val % 2);
		}
	}

	return (&buf[i + 1]);
}

char *itoao(int val, int base, int is_unsigned)
{
	static char buf[64] = {0};
	char * digits;
	int i = 62;

	if (val == 0)
	{
		buf[i] = '0';
		return &buf[i];
	}

	if (!is_unsigned && val < 0)
	{
		val = -val;
		buf[i] = '-';
		i--;
	}

	digits = "0123456789abcdef";
	if (base == 8)
	{
		digits = "01234567";
	}

	for (; val && i; --i, val /= base)
	{
		buf[i] = digits[val % base];
	}

	return (&buf[i + 1]);
}

