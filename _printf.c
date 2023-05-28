#include <stdarg.h>
#include <unistd.h>
#include "main.h"
#define BUFFSIZE 1024
int get_width(int *j, const char *format, va_list args);
int get_flags(const char *format, int *j);
int get_precision(const char *format, int *j, va_list args);
int get_size(const char *format, int *j);

/**
* print_buffer - prints buffer
* @buf: buffer to be printed
* @buff_ind: pointer to the buffer index
*/
void print_buffer(char buf[], int *buff_ind)
{
if (*buff_ind > 0)
write(1, buf, *buff_ind);
*buff_ind = 0;
}

/**
* _printf - prints string pointed out by format
* @format: format string
*
* Return: number of characters printed (excluding null byte)
*/
int _printf(const char *format, ...)
{
int j = 0;
int printed = 0, printed_chars = 0;
va_list args;
char buf[BUFFSIZE];
int buff_ind = 0;
va_start(args, format);
if (format == NULL)
return (-1);
for (j = 0; format && format[j] != '\0'; j++)
{
if (format[j] != '%')
{
buf[buff_ind++] = format[j];
if (buff_ind == BUFFSIZE)
print_buffer(buf, &buff_ind);
printed_chars++;
}
else
{
print_buffer(buf, &buff_ind);
j++;
if (printed == -1)
return (-1);
printed_chars += printed;
}
}
va_end(args);
print_buffer(buf, &buff_ind);
return (printed_chars);
}

