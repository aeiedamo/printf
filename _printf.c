#include "main.h"

/**
 * _printf - function to print strings to stdout.
 * @format: string
 *Return: number of charecter printd.
 */

int _printf (const char *format, ...)
{
int count = 0, index = 0;
char buffer[MAXBUFFER];
va_list arg;
va_start(arg, format);

if (!format)
    return (-1);

while (*format)
{
    if (*format != '%')
    {
        buffer[index++] = *format;
        if (index == MAXBUFFER)
        printbuf(buffer, &index);
        ++count;
    }

    ++format;
}


return (count);
}

/**
* print_buf - free buffer 
*@buffer: the buffer
*@index: track buffer
*/
void print_buf(char buffer[], int *index)
{
if (*index > 0)
write(1, buffer, index);

*index = 0;
}
 
