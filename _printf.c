#include <stdarg.h>
#include <unistd.h>

int _putchar(char c);

/**
 * _printf - custom printf function
 * @format: format string
 *
 * Return: number of characters printed (excluding null byte)
 */
int _printf(const char *format, ...)
{
va_list args;
int count = 0;
va_start(args, format);
while (*format)
{
if (*format != '%')
{
/* Regular character, print it */
_putchar(*format);
count++;
}
else
{
/* Conversion specifier found */
format++; /* Move to the next character after '%' */
/* Handle 'c', 's', and '%' conversion specifiers */
if (*format == 'c')
{
char c = va_arg(args, int);
_putchar(c);
count++;
}
else if (*format == 's')
{
char *str = va_arg(args, char *);
if (str == NULL)
str = "(null)";
while (*str)
{
_putchar(*str);
count++;
str++;
}
}
else if (*format == '%')
{
_putchar('%');
count++;
}
}
format++;
}
va_end(args);
return (count);
}

