#include "main.h"

/**
 * print_p - prints a pointer to an input.
 * @args: the string.
 *
 * Return: return length.
 */

int print_p(va_list args)
{
	void *p = va_arg(args, void *);
	unsigned long num = (unsigned long) p, tmp;
	int dgs = 0, i, len = 0;
	char hex_dg[16] = "0123456789abcdef";
	char hex[16];

	tmp = num;

	while (tmp != 0)
	{
		dgs++;
		tmp /= 16;
	}
	len += _putchar('0');
	len += _putchar('x');
	if (num == 0)
		len += _putchar('0');
	else
	{
		for (i = dgs - 1; i >= 0; i--)
		{
			int dg = num % 16;

			hex[i] = hex_dg[dg];
			num /= 16;
		}
		for (i = 0; i < dgs; i++)
			len += _putchar(hex[i]);
	}
	return (len);
}