#include <stdio.h>
#include <stdarg.h>
#include "main.h"

/**
 * _putchar - Custom putchar function
 * @c: Character to be printed
 *
 * Return: Number of characters printed (always 1)
 */
int _putchar(char c)
{
return (putchar(c));
}

/**
 * print_number - Print an integer
 * @n: Integer to be printed
 *
 * Return: Number of characters printed
 */
int print_number(int n)
{
int count = 0;
if (n < 0)
{
_putchar('-');
count++;
n = -n;
}
if (n / 10)
count += print_number(n / 10);
_putchar((n % 10) + '0');
count++;
return (count);
}

/**
 * print_char - Print a character
 * @ch: Character to be printed
 *
 * Return: Number of characters printed
 */
int print_char(char ch)
{
_putchar(ch);
return (1);
}

/**
 * print_string - Print a string
 * @str: String to be printed
 *
 * Return: Number of characters printed
 */
int print_string(const char *str)
{
int count = 0;
while (*str)
{
_putchar(*str);
str++;
count++;
}
return (count);
}

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
int num;
va_start(args, format);
while (*format != '\0')
{
if (*format == '%')
{
format++;
switch (*format)
{
case 'c':
num = va_arg(args, int);
printed_chars += print_char((char)num);
break;
case 's':
printed_chars += print_string(va_arg(args, char *));
break;
case 'd':
case 'i':
num = va_arg(args, int);
printed_chars += print_number(num);
break;
case '%':
printed_chars += print_char('%');
break;
default:
printed_chars += print_char('%');
printed_chars += print_char(*format);
break;
}
}
else
{
printed_chars += print_char(*format);
}
format++;
}
va_end(args);
return (printed_chars);
}

