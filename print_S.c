#include "main.h"

/**
 *print_ch - prints a single character to stdout
 *@c: character to print
 *@len: length
 *Return: len
 */
int print_ch(char c, int len)
{
	write(1, &c, 1);
	len++;
	return (len);
}

/**
 * print_str - prints a string to stdout
 *@str: string to print
 *@len: the counter
 *Return: len
 */
int print_str(char *str, int len)
{
	if (str == NULL || str == 0)
	{
		return (print_str("(null)", len));
	}
	while (*str)
	{
		len = print_ch(*str, len);
		str++;
	}
	return (len);
}

/**
 * print_S - print a \x for a speciefic characters.
 * @args: string to print.
 *
 * Return: length of the string.
 */

int print_S(va_list args)
{
	char *str = va_arg(args, char *);
	int len = 0;

	if (str == NULL || str == 0)
	{
		return (print_str("(null)", len));
	}
	while (*str)
	{
		if (*str < 32 || *str >= 127)
		{
			len = print_ch('\\', len);
			len = print_ch('x', len);
			len = print_ch((*str / 16) + '0', len);
			len = print_ch((*str % 16) + ((*str % 16 < 10) ? '0' : 'A' - 10), len);
		}
		else
		{
			len = print_ch(*str, len);
		}
		str++;
	}
	return (len);
}
