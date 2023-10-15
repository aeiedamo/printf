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
  int num = 884901889;
 /* char c1 = 'A', c2 = 'B', c3 = 'C'; */
  char *s1 = "str1";
    /* printf("  %d", len); */


   len = printf("Let's try to printf a simple sentence. %s with this num %d \n", s1, num);
  len2 = _printf("Let's try to printf a simple sentence. %s with this num %d \n", s1, num);

   /* _printf("done\n"); */
  _printf("\nis it %d or %d  %% so\n",len, len2);

    return (0);
}
