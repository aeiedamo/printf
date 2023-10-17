#include "main.h"

/**
 * reverse - function to reverse a string
 * @s: pointer to string
 */

void reverse(char *s)
{
	int c, i, j;

	for (i = 0, j = _strlen(s) - 1; i < j; i++, j--)
	{
		c = s[i];
		s[i] = s[j];
		s[j] = c;
	}
}


/**
 * itoa - convert numbers to string.
 * @n: number.
 * @s: pointer to string
 * @base: base.
 * @c: identifier used
*/
void itoa(int n, char *s, int base, char c)
{
	int i, sign;
	char *digits;
	
	if (c == 'X')
		digits = "0123456789ABCDEF";
	else
		digits = "0123456789abcdef";
	
	if ((sign = n) < 0)
		n = -n;
	
	i = 0;
	do
	{
		s[i++] = digits[n % base];
	} while((n /= base) > 0);
	if (sign < 0)
		s[i++] = '-';
	s[i] = '\0';
        reverse(s);
}

/**
 *itoa_binary - convert number to base 2 and make string from that number.
 *@val: number to be converted.
 * Return: buffer contain the string.
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
/**
 *itoao - convert number to any base chosen and make string from that number.
 *@val: number to be converted.
 *@base: base to convert to.
 *@is_unsigned: check if the number unsigned type or not
 *@upper: this just to handle %X so it print in uppercase.
 * Return: buffer contain the string.
*/
char *itoao(int val, int base, int is_unsigned, int upper)
{
	static char buf[64] = {0};
	char *digits;
	int i = 62;

	if (val == 0)
	{
		buf[i] = '0';
		return (&buf[i]);
	}

	if (!is_unsigned && val < 0)
	{
		val = -val;
		buf[i] = '-';
		i--;
	}
	if (upper > 0)
	digits = "0123456789ABCDEF";
	else
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

