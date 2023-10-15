#include "main.h"

/**
 * 
 * 
 * 
 */
 int hand_char(va_list arg, char buffer[])
 {

	char c = va_arg(arg, int);

	return (write_char(c, buffer));
 }

 int hand_per (va_list arg, char buffer[])
 {
	char per;
	UNUSE (arg);
	 per = '%';
	return (write_char(per, buffer));
 }

 int hand_str(va_list arg, char buffer[])
 {
	char *str = va_arg(arg, char*);
	return(write_string(str, buffer));

 }