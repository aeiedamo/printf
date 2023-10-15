#ifndef MAIN_H
#	define MAIN_H
#endif

#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
#include <string.h>

typedef struct buffer {
	/*string d stores all to-be-printed data*/
	char d[1024];
	/*l stands for length*/
	int l;
} buffer;

typedef struct funs
{
	char cmp;
	buffer *(*fun)(buffer *, va_list);
} funs;


/*directs the _printf to the proper function*/
int _printf(const char *format, ...);
int _strlen(const char *str);
int _strcmp(const char *s1, const char *s2);
buffer *_handle(buffer *, va_list, char);

buffer *savestring(buffer *, va_list);
