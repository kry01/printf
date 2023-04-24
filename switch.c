#include "main.h"

/**
 * specifier - specifies the character.
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
			len = print_c(args);
			break;
		case 's':
			len = print_s(args);
			break;
		case 'd':
			len = print_int(args, 0);
			break;
		case 'i':
			len = print_int(args, 0);
			break;
		case '%':
			write(1, "%", 1);
			len = 1;
			break;
		default:
			break;
	}
	return (len);
}
