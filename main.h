#ifndef MAIN_H
#	define MAIN_H

#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
#include <string.h>
#include <stdio.h>

/**
 * struct buffer - struct to store the buffer
 * @d: data
 * @l: length
 */
typedef struct buffer
{
	char d[1024];

	int l;
} buffer;



/**
 * struct funs - to point to functions
 * @cmp: char to compare
 * @fun: pointer to function
 */
typedef struct funs
{
	char cmp;

	buffer *(*fun)(buffer *, va_list);
} funs;


/*directs the _printf to the proper function*/
int _printf(const char *format, ...);
int _strlen(const char *str);
int _strcmp(const char *s1, const char *s2);
char *itoa(int val, int base);
buffer *_handle(buffer *, va_list, char);
buffer *savestring(buffer *, va_list);
buffer *saveint(buffer *, va_list);
#endif
