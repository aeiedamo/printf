#include "main.h"

int write_char(char c)
{
    char buf[1];
    buf[0] = c;
    return (write(1,buf,1));
}

int write_string(char *str, char buffer[])
{
	int len;
   	if (str == NULL)
   		return (-1);
	UNUSE (buffer);
	len = _strlen(str);
/*	strncpy(buffer,str, len); */
	
	return (write(1,str, len));
}