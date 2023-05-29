#include <stdio.h>
#include <stdarg.h>
#include "main.h"
#include <string.h>
/**
 * get_flags - Calculates any  active flags
 * @format: string that print the arguments
 * Return: Flags:
 */
int get_flags(const char *format)
{
int j;
int flags = 0;
const int FLAGS_ARR[] = {1, 2, 4, 8, 16, 0};
const char FLAGS_CH[] = {'-', '+', '0', '#', ' ', '\0'};
{
for (j = 0; format[j] != '\0'; j++)
{
int k;
for (k = 0; FLAGS_CH[k] != '\0'; k++)
{
if (format[j] == FLAGS_CH[k])
{
flags |= FLAGS_ARR[k];
break;
}
}
if (FLAGS_CH[k] == '\0')
break;
}
return flags;
}
}
