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

	va_start(args, format);

	while (*format)
	{
		if (*format == '%')
		{
			format++;
			len = specifier(format, args, len);
			format++;
		}
		else
		{
			while (format[len])
				len++;
			write(1, format, len);
			format++;
		}
	}
	va_end(args);
	retrun(len);
}
