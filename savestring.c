#include "main.h"

/**
 * savestring - to add content of string to the buffer
 * @b: pointer to the buffer
 * @args: arguments
 * Return: the new buffer
*/
buffer *savestring(buffer *b, va_list args)
{
        int i;
        char *str;

        str = va_arg(args, char *);
        for (i = 0; i < _strlen(str); i++, b->l++)
                b->d[b->l] = str[i];
        
        return (b);
}