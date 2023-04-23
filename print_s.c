#include "main.h"

/**
*print_s - prints a string
*@args: string to print
*Return: number of characters printed
*/

int print_s(va_list args)
{
	char *str = va_arg(args, char *);
	int len = 0;

	while (str[len])
		len++;

	write(1, str, len);
	return (len);
}
