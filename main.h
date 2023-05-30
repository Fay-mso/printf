#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
int _putchar(char c);
int _printf(const char *format, ...);
int _print_integer(int n);
int printf_int(va_list args);
int printf_dec(va_list args);
int printf_pointer(va_list val);
#endif /* MAIN_H */
