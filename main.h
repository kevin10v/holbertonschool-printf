#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <unistd.h>

int _printf(const char *format, ...);
int handle_format(char specifier, va_list args);
int print_char(char c);
int print_string(char *str);

int print_int(int n);


int _printf(const char *format, ...);
int handle_format(char specifier, va_list args);
int print_char(char c);
int print_string(char *str);
int print_int(int n);


#endif
