#include "main.h"

/**
 * _printf - Produces output according to a format
 * @format: The format string
 * Return: Number of characters printed
 */
int _printf(const char *format, ...)
{
va_list args;
int i = 0, count = 0, temp;

if (!format)
return (-1);

va_start(args, format);

while (format && format[i])
{
if (format[i] == '%' && format[i + 1])
{
i++;
temp = handle_format(format[i], args);
if (temp == -1)
{
write(1, "%", 1);
write(1, &format[i], 1);
count += 2;
}
else
{
count += temp;
}
}
else
{
write(1, &format[i], 1);
count++;
}
i++;
}
va_end(args);
return (count);
}
