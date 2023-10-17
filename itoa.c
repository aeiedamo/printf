#include "main.h"

/**
 * itoa_binary - con
 * 
 * 
*/
char *itoa_binary(unsigned int val)
{
    static char buf[64] = {0};
    int i = 62;

    if (val == 0) {
        buf[i--] = '0';
    } else {
        for (; val && i; --i, val /= 2) {
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
