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
  int len;
  char c1 = 'A', c2 = 'B', c3 = 'C';
  char *s1 = "str1", *s2 = "str2", *s3 = "str3";
    len = _printf("this %c %c %C   %s %s %s",c1 , c2 , c3, s1, s2 ,s3);
    printf("  %d", len);
    return (0);
}
