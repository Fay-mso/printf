/**
 * _putchar - writes a string
 * @c: the string to print
 *
 * Return: putchar
 */

#include <unistd.h>

int _putchar(char c)
{
return (write(1, &c, 1));
}
