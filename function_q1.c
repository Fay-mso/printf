#include "main.h"
#include <stdarg.h>
#include <stddef.h>

/**
 * print_char - Prints a character
 * @args: The argument list
 *
 * Return: Number of characters printed
 */
int print_char(va_list args)
{
char c = va_arg(args, int);
int count = 0;
count += _putchar(c);
return (count);
}

/**
 * print_string - Prints a string
 * @args: The argument list
 *
 * Return: Number of characters printed
 */
int print_string(va_list args)
{
char *str = va_arg(args, char *);
int count = 0;
if (str == NULL)
str = "(null)";
while (*str)
{
count += _putchar(*str);
str++;
}
return (count);
}

/**
 * print_percent - Prints a percent sign
 * @args: The argument list
 *
 * Return: Number of characters printed
 */
int print_percent(va_list args)
{
(void)args;
return (_putchar('%'));
}
