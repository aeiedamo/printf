#include "main.h"

int write_char(char c)
{
    char buf_c[2];
    buf_c[0] = c;
    buf_c[1] = '\0';

	if (buf_c[0] !=  '\0')
    return (write(1,&buf_c[0],1));

	return (-1);
}

int write_string(char *str, char buffer[])
{
	/* char buf_s[MAXBUFFER]; */
	int len;
   	if (str == NULL)
   		return (-1);

	UNUSE (buffer);

	len = strlen(str);
	
	return (write(1, &str[0], len));
}