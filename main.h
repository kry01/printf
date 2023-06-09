#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdarg.h>

int _printf(const char *format, ...);
int print_c(va_list args);
int print_s(va_list args);
int print_int(va_list args);
int print_b(va_list args);
int print_o(va_list args);
int print_u(va_list args);
int print_x(va_list args, int is_upper);
int print_S(va_list args);
int print_p(va_list args);
int specifier(const char *format, va_list args, int len);
int _putchar(char c);

#endif
