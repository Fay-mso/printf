#include "main.h"

/* Function to convert and print a number */
void convert_size_number(unsigned int num)
{
if (num / 10)
convert_size_number(num / 10);
_putchar((num % 10) + '0');
}

