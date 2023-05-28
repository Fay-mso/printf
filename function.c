#include <stdio.h>
#include <string.h>
#include "main.h"
#include <stdarg.h>

/************************* PRINT CHAR *************************/

/**
 *print_char - Prints a char
 *@types: List of arguments
 * Return: Number of chars printed
 */
int print_char(va_list types)
{
char c = va_arg(types, int);
return (putchar(c));
}

/************************* PRINT STRING *************************/
/**
* print_string - Prints a string
* @types: List of arguments
* Return: Number of chars printed
*/
int print_string(va_list types)
{
char *str = va_arg(types, char *);

if (str == NULL)
str = "(null)";

return (puts(str));
}

/************************* PRINT PERCENT SIGN *************************/
/**
* print_percent - Prints a percent sign
* @types: List of arguments
* Return: Number of chars printed
*/
int print_percent(va_list types)
{
(void)types;
return (putchar('%'));
}

/************************* PRINT INT *************************/
/**
* print_int - Print int
* @types: List of arguments
* Return: Number of chars printed
*/
int print_int(va_list types)
{
int n = va_arg(types, int);
return (printf("%d", n));
}

/************************* PRINT BINARY *************************/
/**
* print_binary - Prints an unsigned number in binary format
* @types: List of arguments
* Return: Number of chars printed
*/
int print_binary(va_list types)
{
unsigned int n = va_arg(types, unsigned int);
return (printf("%u", n));
}

