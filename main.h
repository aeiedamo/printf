#ifndef MAIN_H
#	define MAIN_H
#endif

#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

typedef struct buffer {
	/*string d stores all to-be-printed data*/
	char d[1024];
	/*l stands for length*/
	int l;
} buffer;

int _printf(const char *format, ...);
buffer *savestring(buffer *b, va_list args);
int _strlen(const char *str);