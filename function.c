#include "main.h"

/**
 * 
 * 
 * 
 */
 int hand_char(va_list arg)
 {
	char c = va_arg(arg, int);
	return (write_char(c));
 }

/**
 * 
 *
 *  
 */
 int hand_per (va_list arg)
 {
	int count;
	char per;
	UNUSE (arg);
	per = '%';
	count = write_char(per);
	return (count);
 }

/**
 * 
 * 
 * 
 * 
 */
 int hand_str(va_list arg)
 {
	int count = 0;
	char *str = va_arg(arg, char*);
	count = write_string(str);
	if (count < 0)
	{
		return (-1);
	}
	
	return (count);
 }