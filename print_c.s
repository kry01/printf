#include "main.h"

/**
*
*/

int print_c(va_list args)
{
	char c = va_arg(args, int);

	write(1, &c, 1);
	return (1);
}
