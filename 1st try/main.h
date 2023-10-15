#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdarg.h>
#include <unistd.h>
#include <string.h>

#define MAXBUFFER 1024
#define UNUSE(X) (void)(X)


typedef struct str
{
    char FS;
    int (*F)(va_list);
} HANDLE;


typedef struct buf
{
	int len;
	char data[1024];    
} buf;


int _printf (const char *format, ...);
int HANDLE_FS(const char *format, int *i, char buffer[], va_list arg);
int _putc(char c);
int _puts(const char str[]);
int _strlen(const char *str);
void print_buf(char buffer[], int *index);
int hand_char(va_list arg);
int hand_per (va_list arg);
int hand_str(va_list arg);
int hand_numd (va_list arg);
int convertnum(int num);
int write_char(char c);
int write_string(char *str);

buf *printstring(buf *buffer, va_list args);



#endif