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

/**
 * _puts - function to print strings
 * @str: pointer to string to print
 * Return: 1 if success, -1 otherwise
*/

int _puts(const char *str)
{
	int counter;
	char *s;

	for (s = str; *s; s++)
		counter++;
	return(write(1, &str, counter));
}