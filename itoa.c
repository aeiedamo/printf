#include "main.h"

/**
 * itoa - converts integer to string
 * @val: integer value
 * @base: base system to use
 * Return: integer string
 */

char* itoa(int val, int base)
{
	static char buf[33] = {0};
	int i = 31;

	for(; val && i ; --i, val /= base)
		buf[i] = "0123456789abcdef"[val % base];

	if (val < 0)
		buf[i] = '-';

	return (&buf[i+1]);

}

