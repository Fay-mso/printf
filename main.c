/**
 * main - main function
 *
 * Return: 0 if okay
 */
#include "main.h"
#include <stdio.h>

int main(void)
{
char ch = 'A';
char *str = "Hello, world!";
/* Testing the _putchar function */
_putchar(ch);
_putchar('\n');
/* Testing the _printf function */
_printf("Character: %c\n", ch);
_printf("String: %s\n", str);
_printf("Percentage: %%\n");

return (0);
}
