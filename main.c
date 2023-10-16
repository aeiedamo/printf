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
_printf("css%ccs%scscscs\n", 'T', "Test");
printf("css%ccs%scscscs", 'T', "Test");
printf("\nseparate\n");

_printf(NULL);
printf("\nseparate\n");


_printf("%K");
_printf("%K\n");


  
    return (0);
}
