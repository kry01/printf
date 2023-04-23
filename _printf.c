#include "main.h"

/**
*_printf - prints anything
*@format: input to print
*Return: number of characters printed
*/

int _printf(const char *format, ...)
{
	va_list args;
	int len = 0;

	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);

	va_start(args, format);

	while (*format)
	{
		if (*format == '%')
		{
			format++;
			len += specifier(format, args, len);
			format++;
		}
		else
		{
			_putchar(*format);
			format++;
			len++;
		}
	}
	va_end(args);

	return (len);
}
