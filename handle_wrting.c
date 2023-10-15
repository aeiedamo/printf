#include "main.h"

int write_char(char c, char buffer[])
{
    int count = 0;
    buffer[count++] = c;
    buffer[count] = '\0';
    return (write(1,buffer,1));
}

int write_string(char *str, char buffer[])
{
    int count = 0;

    while (str[count] != '\0')
    {
    buffer[count ++] = str;
    ++count;
    }
    ++count;

    return (write(1,buffer, count));
}