#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>

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
char *itoa(int, int);
void printrev(char *buffer);
int is_it_base2(int);
int is_it_base8(int);
int printbin(va_list);
#endif
