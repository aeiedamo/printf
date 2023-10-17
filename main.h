#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

int _printf(const char *, ...);
int _putchar(char);
int _strlen(const char *);
int _handle(char, va_list);
int more_handle(char c, va_list args);
int printchar(va_list);
int printstring(va_list);
int printint(va_list);
int printbinary (va_list arg);
char *itoa(int, int);
#endif
