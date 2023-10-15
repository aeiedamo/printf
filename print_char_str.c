#include "main.h"

/**
 * _putc - function to print chars
 * @c: char to print
 * Return: 1 if success, -1 otherwise
*/

int _putc(char c)
{
	return(write(1, &c, 1));
}