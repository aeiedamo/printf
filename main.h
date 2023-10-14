#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
#include <strarg.h>

typedef struct str
{
char FS;
int (F)(char buf[], va_list);
}HANDLE;

#define MAXBUFFER 1024

int _putc(char c);
int _puts(const char *str);
int _strlen(const char *str);
int _printf(const char *format, ...);
void print_buf(char buffer, int *index);
int HANDLE_FS(char *, int, char, int, va_list);
#endif
