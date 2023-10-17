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
char *itoa_binary(unsigned int val);
char *itoao(int val, int base, int is_unsigned);
int printunsign(va_list);
/*int check_base(int, int); */
char *itoa(int, int);
int is_it_base2(int num);
int is_it_base8(int num);
int printbin (va_list);
#endif
