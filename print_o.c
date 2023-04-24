#include "main.h"

/**
 * print_o - function to convert the positive number to octal code.
 * @args: the number.
 *
 * Return: length.
 */

int print_o(va_list args)
{
	unsigned int n = va_arg(args, unsigned int);
	int onum[64], i = 0, j, len = 0;

	if (n == 0)
	{
		_putchar('0');
		return (1);
	}

	while (n > 0)
	{
		onum[i++] = n % 8;
		n /= 8;
		len++;
	}

	for (j = len - 1; j >= 0; j--)
		_putchar(onum[j] + '0');

	return (len);
}
