#include "main.h"

/**
 * _strlen - finds length of string
 * @str: string to count
 * Return: length of str
*/
int _strlen(const char *str)
{
	const char *s;

	for (s = str; *s; ++s)
		;
	return (s - str);
}