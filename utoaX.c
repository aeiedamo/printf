#include "main.h"

/**
 * utoaX - convert numbers to string.
 * @val: number.
 * @base: base.
 * Return: int as a string
*/

char *utoaX(unsigned int val, int base)
{
	static char buf[32] = {0};
	int i = 30;

	for (; val && i; --i, val /= base)
		buf[i] = "0123456789ABCDEF"[val % base];

	return (&buf[i + 1]);
}
