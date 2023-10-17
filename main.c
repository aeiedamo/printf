#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	_printf("%d, %i\n", 4532, 6542);
    _printf("%o %x %u %X\n", 'f', 783 , 783, 783);
    _printf("%b", -3);
    return (0);
}
