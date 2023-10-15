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
	char per;
	UNUSE (arg);
	UNUSE (buffer);
	per = '%';
	return (write_char(per));
 }

/**
 * 
 * 
 * 
 * 
 */
 int hand_str(va_list arg, char buffer[])
 {
	char *str = va_arg(arg, char*);
	return(write_string(str, buffer));

 }