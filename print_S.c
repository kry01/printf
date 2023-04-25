#include "main.h"

/**
 * _hex - convert a char to hex code.
 * @str: the char to convert.
 *
 * Return: length of the hex.
 */
int _hex(char str)
{
	unsigned int n = str;
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
			hnum[i] = 65 + (rmd - 10);
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

/**
 * print_S - print a \x for a speciefic characters.
 * @args: string to print.
 *
 * Return: length of the string.
 */

int print_S(va_list args)
{
	char *str = va_arg(args, char *);
	int len = 0, i = 0;
	char s;

	if (str == 0)
		return (write(1, "(null)", 6));

	while (str[i])
	{
		if ((str[i] > 0 && str[i] < 32) || str[i] >= 127)
		{
			_putchar('\\');
			_putchar('x');

			if (str[i] <= 15)
				_putchar('0');

			len += 2;
			len += _hex(str[i]);
		}
		else
		{
			_putchar(str[i]);
			len++;
		}
		i++;
	}

	return (len);
}
