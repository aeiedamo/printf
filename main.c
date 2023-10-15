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
    int len = 0;
  char str[] = "LATTERS";
  char c = 'R';
    len = _printf("to day lesson : (%s) for %s : (%c) %%100 awowsme fs",str , str, c);
    printf("  %d", len);
    return (0);
}
