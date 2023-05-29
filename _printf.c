#include <stdarg.h>
#include <unistd.h>
#include "main.h"

int _putchar(char c);

/**
 * _puts - writes a string to stdout
 * @str: the string to print
 *
 * Return: the number of characters printed
 */
int _puts(const char *str)
{
int i = 0;
while (str && str[i])
{
_putchar(str[i]);
i++;
}
return (i);
}

/**
 * _printf - custom printf function
 * @format: format string
 *
 * Return: number of characters printed (excluding null byte)
 **/
int _printf(const char *format, ...)
{
va_list args;
int count = 0;
va_start(args, format);
while (format && *format)
{
if (*format == '%')
{
format++;
switch (*format)
{
case 'c':
_putchar(va_arg(args, int));
count++;
break;
case 's':
count += _puts(va_arg(args, char *));
break;
case '%':
_putchar('%');
count++;
break;
default:
_putchar('%');
_putchar(*format);
count += 2;
break;
}
}
else
{
_putchar(*format);
count++;
}
format++;
}
va_end(args);
return (count);
}

