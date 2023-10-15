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
    char c = '%';
    int len;
    len = _printf("%s this is char %c", str, c);
    printf(" %d", len);
    return (0);
}