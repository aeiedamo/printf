#include "main.h"

/**
 * _strcmp - compare 2 strings.
 * @s1: first string.
 * @s2: second string.
 * Return: 0 if success, not 0 otherwise.
*/

int _strcmp(const char *s1, const char *s2)
{
        while (*s1 == *s2++)
        {
                if (*s1++ == 0)
                        return (0);
        }
        return (*(const unsigned char *)s1 - *(const unsigned char *)(s2 - 1));
}