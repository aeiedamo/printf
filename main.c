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
 int num = 42;
    int num2 = -123;

    int len = _printf("The value of num is: %d\n", num);
    int len2 = printf("The value of num is: %d\n", num);

    int len3 = _printf("The value of num2 is: %i\n", num2);
    int len4 = _printf("The value of num2 is: %i\n", num2);

    _printf("Lengths for num (custom printf): [%d, %d]\n", len, len2);
    _printf("Lengths for num2 (custom printf): [%d, %d]\n", len3, len4);
    _printf("%d", NULL);
    return (0);
}
