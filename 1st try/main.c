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
	char c = 'a';
	char *str = "Hello, World";

	_printf("blah blah %s, %c", str, c);
	return (0);
}
