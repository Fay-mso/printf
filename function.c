#include <stdarg.h>
#include <stdlib.h>
#include "main.h"

/**
 * _printf - Custom printf function
 * @format: String containing format specifiers
 *
 * Return: Number of characters printed
 */
int _printf(const char *format, ...)
{
va_list args;
int printed_chars = 0;
va_start(args, format);
while (format && *format)
{
if (*format == '%')
{
format++;
if (*format == 'd' || *format == 'i')
printed_chars += _print_integer(va_arg(args, int));
else
{
_putchar('%');
_putchar(*format);
printed_chars += 2;
}
}
else
{
_putchar(*format);
printed_chars++;
}
format++;
}
va_end(args);
return (printed_chars);
}

/**
 * _print_integer - Print an integer
 * @n: Integer to be printed
 *
 * Return: Number of characters printed
 */
int _print_integer(int n)
{
unsigned int num;
int digit, div, printed_chars = 0;
if (n < 0)
{
_putchar('-');
printed_chars++;
num = -n;
}
else
num = n;
div = 1;
while (num / div > 9)
div *= 10;
while (div != 0)
{
digit = num / div;
_putchar('0' + digit);
printed_chars++;
num %= div;
div /= 10;
}
return (printed_chars);
}
