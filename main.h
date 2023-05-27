#ifndef main_h
#define main_h
#include <stdio.h>
#include <stdarg.h>
int _printf(const char *format, ...);
int _putchar(char c);
int print_int(va_list args, char buffer[], int size);
#endif
