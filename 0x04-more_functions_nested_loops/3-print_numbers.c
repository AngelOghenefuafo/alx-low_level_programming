#include "main.h"
#include <unistd.h>

/**
 * print_numbers - checks for digit (0 - 9)
 *
 * Return: Always 0
 */

void print_numbers(void)
{
	int c;

	for (c = 48; c < 58; c++)
	{
		_putchar(c);
	}
	_putchar("\n");
}
