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
  int len, len2;
 /* char c1 = 'A', c2 = 'B', c3 = 'C'; */
  char *s1 = "str1";
    /* printf("  %d", len); */


   len = _printf("Let's try to printf a simple sentence. %s\n", s1);
  len2 = 0;
   _printf("done\n");
  _printf("\nis it %d or %d",len, len2);

    return (0);
}
