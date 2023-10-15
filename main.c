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
    char str[] = "Hello, World";
    char *str2 = "world , hello";
    char c = '%';
    int len;
    len = _printf("%s this is char %c  %s", str, c, str2);
    printf("  %d", len);
    return (0);
}