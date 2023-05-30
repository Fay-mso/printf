#include "main.h"
#include <stdarg.h>

/**
 * print_integer - Prints an integer
 * @args: The argument list
 *
 * Return: Number of characters printed
 */
int print_integer(va_list args)
{
int n = va_arg(args, int);
int count = 0;
count += _putchar(n + '0');
return (count);
}

/**
 * print_decimal - Prints a decimal
 * @args: The argument list
 *
 * Return: Number of characters printed
 */
int print_decimal(va_list args)
{
int n = va_arg(args, int);
int count = 0;
count += _putchar(n + '0');
return (count);
}
