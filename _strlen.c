#include "main.h"

/**
 * _strlen - count length of string
 * @str: string to count
 * Return: length of string
*/

int _strlen(const char *str)
{
    const char *s;

    for (s = str; *s; ++s)
        ;
    return (s - str);
}