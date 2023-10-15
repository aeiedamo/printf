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
	int len;
   	if (str == NULL)
   		return (-1);

	len = _strlen(str);
	strncpy(buffer,str, len);
	
	return (write(1,buffer, len));
}