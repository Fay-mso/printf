#include <stdio.h>
#include <stdarg.h>
#include "main.h"

/**
 * _printf - Custom printf function
 * @format: Format string
 *
 * Return: Number of characters printed
 */
int _printf(const char *format, ...)
{
va_list args;
int printed_chars = 0;
char c;
char *str;
va_start(args, format);
while (*format != '\0')
{
if (*format == '%')
{
format++;
switch (*format)
{
case 'c':
c = (char) va_arg(args, int);
putchar(c);
printed_chars++;
break;
case 's':
str = va_arg(args, char *);
if (str == NULL)
str = "(null)";
while (*str != '\0')
{
putchar(*str);
str++;
printed_chars++;
}
break;
case '%':
putchar('%');
printed_chars++;
break;
default:
putchar('%');
putchar(*format);
printed_chars += 2;
break;
}
}
else
{
putchar(*format);
printed_chars++;
}
format++;
}
va_end(args);
return (printed_chars);
}
