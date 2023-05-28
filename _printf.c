#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include "main.h"
#include <string.h>
#define BUFFSIZE 1024

#define BUFFSIZE 1024

void print_buffer(char buf[], int *buff_ind)
{
    if (*buff_ind > 0)
        write(1, buf, *buff_ind);
    *buff_ind = 0;
}

void my_putchar(char c)
{
    write(1, &c, 1);
}

int _printf(const char *format, ...)
{
    int j = 0;
    int printed_chars = 0;
    va_list args;
    int buff_ind = 0;
    char buf[BUFFSIZE];

    va_start(args, format);

    if (format == NULL)
        return (-1);

    for (j = 0; format && format[j] != '\0'; j++)
    {
        if (format[j] != '%')
        {
            buf[buff_ind++] = format[j];
            if (buff_ind == BUFFSIZE)
                print_buffer(buf, &buff_ind);
            printed_chars++;
        }
        else
	{
            print_buffer(buf, &buff_ind);
            j++;

            printed_chars++;
        }
    }

    va_end(args);
    print_buffer(buf, &buff_ind);
    return (printed_chars);
}

