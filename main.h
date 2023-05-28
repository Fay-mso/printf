#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>

int _putchar(char c);
int _printf(const char *format, ...);
void convert_size_number(unsigned int num);
void print_buffer(char buf[], int *buff_ind);
int print_char(va_list types);
int print_string(va_list types);
int print_percent(va_list types);
int print_int(va_list types);
int print_binary(va_list types);

#endif /* MAIN_H */

