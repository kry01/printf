#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: 0 on success, error code otherwise
 */
int main(void)
{
	int len, len2, len3;

	len = _printf("%p\n", NULL);
	len2 = printf("%p\n", NULL);
	len3 = write(1, "(nil)", 5);
	fflush(stdout);
	if (len != len2)
	{
		printf("Lengths differ.\n");
		printf("%d\n", len);
		printf("%d\n", len2);
		printf("%d\n", len3);
		fflush(stdout);
		return (1);
	}
	printf("%d\n", len3);
	return (0);
}

