#include "main.h"
#include <stdio.h>

int main(void)
{
        char c = 'c';
        char *str = "Hello, World";
        int a;

        _printf("c = %c, str = %s%%\n", c, str);
        a = _printf("%s\n", str);
        printf("%d\n", a);
        return (0);
}