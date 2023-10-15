#include "main.h"
/*
*hand_num - handle numbers.
*@arg: va_list
*Return: numper of printed charecters
*/
int hand_numd(va_list arg)
{
    int num = va_arg(arg , int);   
    int count ;
    count = convertnum(num);

    if (count < 0)
    return (-1);

    return (count);
}

