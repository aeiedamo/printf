#include "main.h"

/**
 * _printf - main function of printf project
 * @format: all included formats;
 * Return: length of format.
*/
int _printf(const char *format, ...)
{
        buffer b;
        int i;
        va_list args;

        b.l = 0;
        va_start(args, format);
        for (i = 0; format[i] != '\0'; i++)
        {
                if (format[i] != '%')
                {
                        b.d[b.l] = format[i];
                        b.l++;
                }
                else
                {
                        i++;
                        switch (format[i])
                        {
                                case 'c':
                                        b.d[b.l] = va_arg(args, int);
                                        b.l++;
                                        break;
                                case 's':
                                        savestring(&b, args);
                                        break;
                                case '%':
                                        b.d[b.l] = '%';
                                        b.l++;
                                        break;
                        }
                }
        }
        va_end(args);
        write(1, &b.d, b.l);
        return (b.l);
}