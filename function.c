#include "main.h"

/**
 * 
 * 
 * 
 */
 int hand_char(va_list arg, char buffer[])
 {
	char c = va_arg(arg, int);
	UNUSE (buffer);
	return (write_char(c));
 }

/**
 * 
 *
 *  
 */
 int hand_per (va_list arg, char buffer[])
 {
	int count;
	char per;
	UNUSE (arg);
	UNUSE (buffer);
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
 int hand_str(va_list arg, char buffer[])
 {
	int count;
	char *str = va_arg(arg, char*);
	count = write_string(str, buffer);
	if (count == -1)
	{
		return (-1);
	}
	return (count);
 }