#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
#include <stdarg.h>

#define MAXBUFFER 1024
#define UNUSE(X) (void)(X)
typedef struct str
{
    char FS;
    int (*F)(va_list , char);
} HANDLE;

int _putc(char c);
int _puts(const char *str);
int _strlen(const char *str);
int _printf(const char *format, ...);
void print_buf(char buffer[], int *index);
int HANDLE_FS(char *, int, char [], int, va_list);
int hand_char(va_list arg, char buffer[]);
 int hand_per (va_list arg, char buffer[]);
 int hand_str(va_list arg, char buffer[]);
int write_char(char c, char buffer[]);
int hand_char(va_list arg, char buffer[]);
int write_string(char *str, char buffer[]);



#endif
