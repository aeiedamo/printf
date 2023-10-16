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
    char *str = "very longgggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggggghjkjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjjj"; 
 len = _printf("man gcc : \n%s", str);
  len2 =  printf("man gcc : \n%s", str);
    
    printf("%d and %d\n",len, len2);
    _printf("%id and %i", len, len2);
    return (0);
}
