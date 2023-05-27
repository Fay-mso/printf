#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "main.h"
/**
*print_int - prints the function
*convert_size_number - coverts given number based on size
*@width: specifies characters to be printed
*@precision: specifies the maximum characters to be printed
*@buffer: memory block to store data
*@flags: modify functions
*@size: allocates space
*@args: arguments
*Return: printed characters
**/
int convert_size_number(int num, int size);
int print_int(va_list args, char buffer[], int size)
{
unsigned long int n;
int num = va_arg(args, int);
int j = size - 2;
num = convert_size_number(num, size);
n = (unsigned long int)num;
if (num == 0)
{
buffer[j--] = '0';
}
buffer[size - 1] = '\0';
if (num < 0)
{
n = (unsigned long int)(-1 * num);
}
while (n > 0)
{
buffer[j--] = (n % 10) + '0';
n /= 10;
}
{
j++;
}
return (j);
}
