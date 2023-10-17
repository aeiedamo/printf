#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
#include <string.h>

int _printf(const char *, ...);
int _putchar(char);
int _strlen(const char *);
int _handle(char, va_list);
int more_handle(char, va_list);
int printchar(va_list);
int printstring(va_list);
int printint(va_list);
char *itoa_binary(unsigned int);
char *itoao(int, int, int, int);
int printunsign(va_list, int);
void printrev(char *buffer);
int printbin(va_list);

void reverse(char *s);
char *itoa(int val, int base);
#endif
