#include "main.h"

/**
 * printpointer - function to print pointers
 * @args: arguments
 * Return: length of address
*/

int printpointer(va_list args)
{
        void *ptr;
        unsigned long int num;
        int count;

        ptr = va_arg(args, void *);
        if (ptr == NULL)
        {
                _printf("(nil)");
                return (_strlen("(nil)"));
        }

        num = (unsigned long int) ptr;
        count = _printf("0x%x", num);
        return (count);
}