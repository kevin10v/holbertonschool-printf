#include "main.h"

/**
 * handle_format - Handles format specifiers
 * @specifier: the format specifier
 * @args: argument list
 * Return: number of characters printed
 */
int handle_format(char specifier, va_list args)
{
char *str;
char c;

switch (specifier)
{
case 'c':
c = va_arg(args, int);
return (print_char(c));
case 's':
str = va_arg(args, char *);
return (print_string(str));
case '%':
return (print_char('%'));
default:
return (-1);
}
}

/**
 * print_char - Prints a single character
 * @c: character to print
 * Return: number of characters (1)
 */
int print_char(char c)
{
return (write(1, &c, 1));
}

/**
 * print_string - Prints a string
 * @str: string to print
 * Return: number of characters printed
 */
int print_string(char *str)
{
int count = 0;

if (!str)
str = "(null)";

while (*str)
{
write(1, str++, 1);
count++;
}
return (count);
}
