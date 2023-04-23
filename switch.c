#include "main.h"

/**
 * spicifier - spisifie the character.
 * @format: format.
 * @args: string to print.
 * @len: length of the string.
 * Return: return length.
 */

int specifier(const char *format, va_list args, int len)
{
	switch (*format)
	{
		case 'c':
			_putchar(va_arg(args, int));
			len++;
			break;
		case 's':
			len = print_s(args);
			break;
		case '%':
			write(1, "%", 1);
			len++;
			break;
		default:
			break;
	}
	return (len);
}