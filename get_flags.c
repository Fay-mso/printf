#include <stdio.h>
#include <stdarg.h>
#include "main.h"
#include <string.h>
/**
 * get_flags - Calculates any  active flags
 * @i: takes any parameter
 * @format: string that print the arguments
 * Return: Flags:
 */
int get_flags(const char *format, int *i)
{
int j, curr_i;
int flags = 0;
const int FLAGS_ARR[] = {1, 2, 4, 8, 16, 0};
const char FLAGS_CH[] = {'-', '+', '0', '#', ' ', '\0'};
for (curr_i = *i + 1; format[curr_i] != '\0'; curr_i++)
{
for (j = 0; FLAGS_CH[j] != '\0'; j++)
if (format[curr_i] == FLAGS_CH[j])
{
flags |= FLAGS_ARR[j];
break;
}
if (FLAGS_CH[j] == 0)
break;
}
*i = curr_i - 1;
return (flags);
}
