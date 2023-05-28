#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include "main.h"
#include <string.h>
#define BUFFSIZE 1024
/**
 * print_buffer - Prints the contents of the buffer if it exists
 * @buffer: Array of characters
 * @buff_ind: Index at which to add next character, represents the length
 */
void print_buffer(char buffer[], int *buff_ind)
{
if (*buff_ind > 0)
{
fwrite(buffer, sizeof(char), *buff_ind, stdout);
}
*buff_ind = 0;
}
void print_buffer(char buffer[], int *buff_ind);

/**
 * custom_printf - Custom printf function
 * @format: Format string
 * @args: Variable arguments
 * Return: Number of characters printed
 */
int custom_printf(const char *format, ...)
{
int printed_chars = 0;
char buffer[BUFFSIZE];
int buff_ind = 0;
va_list args;
va_start(args, format);
while (*format != '\0')
{
if (*format != '%')
{
buffer[buff_ind++] = *format;
if (buff_ind == BUFFSIZE)
{
print_buffer(buffer, &buff_ind);
}
putchar(*format);
printed_chars++;
}
else
{
print_buffer(buffer, &buff_ind);
format++; 
switch (*format)
{
case 'd':
{
int num = va_arg(args, int);
printf("%d", num);
printed_chars++;
break;
}
case 's':
{
char *str = va_arg(args, char *);
printf("%s", str);
printed_chars += strlen(str);
break;
}
default:
break;
}
}
format++;
}
print_buffer(buffer, &buff_ind);
va_end(args);
return printed_chars;
}

