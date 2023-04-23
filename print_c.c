#include "main.h"

/**
 * print_c - print char.
 * @args: char to print.
 * Return: 1.
 */

int print_c(va_list args)
{
	char c = va_arg(args, int);

	write(1, &c, 1);
	return (1);
}
