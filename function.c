#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "main.h"
/**
*_printf- function that prints d and i
*@format: format
*code for format specifier
*Return: 0
**/
int _printf(const char *format, ...)
{
int i = 0;
va_list(length);
va_start(length, format);
while (*format != '\0')
{
if (*format == '%')
{
format++;
if (*format == 'd' || *format == 'i')
{
int value = va_arg(length, int);
i += printf("%d", value);
}
else
{
putchar(*format);
i+= 2;
putchar('%');
}
}
else
{
putchar(*format);
i++;
}
format++;
}
va_end(length);
return (i);
}
