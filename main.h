#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdarg.h>

int _printf(const char *format, ...);
int print_c(va_list args);
int print_s(va_list args);
int print_int(va_list args, int counter);
int specifier(const char *format, va_list args, int len);
int _putchar(char c);

#endif
