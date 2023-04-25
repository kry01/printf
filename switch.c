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
		case 'i':
			len = print_int(args);
			break;
		case 'b':
			len = print_b(args);
			break;
		case 'o':
			len = print_o(args);
			break;
		case 'u':
			len = print_u(args);
			break;
		case 'x':
		case 'X':
			len = print_x(args, (*format == 'X') ? 1 : 0);
			break;
		case 'S':
			len = print_S(args);
			break;
		case 'p':
			len = print_p(args);
			break;
		case '%':
			write(1, "%", 1), len = 1;
			break;
		default:
			write(1, "%", 1), _putchar(*format), len = 2;
			break;
	}
	return (len);
}
