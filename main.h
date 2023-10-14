#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

#define MAXBUFFER 1024

int _putc(char c);
int _puts(const char *str);
int _strlen(const char *str);
int _printf(const char *format, ...);
void print_buf(char buffer, int *index);

#endif
