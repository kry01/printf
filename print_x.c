#include "main.h"

/**
 * print_x - function to convert positive number to hex code.
 * @args: number.
 *
 * Return: length.
 */

int print_x(va_list args, int is_upper)
{
	unsigned int n = va_arg(args, unsigned int);
	int i = 0, j, len = 0, hnum[100], rmd;

	if (n == 0)
	{
		_putchar('0');
		return (1);
	}
	while (n > 0)
	{
		rmd = n % 16;

		if (rmd < 10)
			hnum[i] = 48 + rmd;
		else
		{
			if (is_upper)
				hnum[i] = 65 + (rmd - 10);
			else
				hnum[i] = 97 + (rmd - 10);
		}
		i++;
		n /= 16;
	}

	for (j = i - 1; j >= 0; j--)
	{
		_putchar(hnum[j]);
		len++;
	}

	return (len);
}
