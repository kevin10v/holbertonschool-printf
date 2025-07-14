
#include "main.h"

/**
 * handle_format - handles format specifiers
 * @specifier: format character
 * @args: list of arguments
 * Return: number of characters printed or -1 if unknown
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
case 'd':
case 'i':
return (print_int(va_arg(args, int)));
default:
return (-1);
}
}

/**
 * print_char - Prints a single character
 * @c: character to print
 * Return: number of characters printed
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

/**
 * print_int - Prints a signed integer
 * @n: The integer to print
 * Return: Number of characters printed
 */
int print_int(int n)
{
int count = 0;
unsigned int num;

if (n < 0)
{
count += write(1, "-", 1);
num = -n;
}
else
{
num = n;
}

if (num / 10)
count += print_int(num / 10);

count += print_char((num % 10) + '0');

return (count);
}
