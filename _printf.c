#include "main.h"

/**
 * _printf - Custom printf function handling %c, %s, %%
 * @format: format string
 * Return: number of characters printed, or -1 on error
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
if (format[i] == '%')
{
if (!format[i + 1]) /* invalid case: "%" at end */
{
va_end(args);
return (-1);
}
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
