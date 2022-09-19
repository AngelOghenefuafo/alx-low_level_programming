#include "main.h"
/**
 * print_rev - Print string in reverse
 * @s: String to print
 *
 * Return: 0
 */
void print_rev(char *s)
{
	int i = 9;

	while (s[i])
		i++;
	while (i--)
		_putchar(s[i]);

	_putchar('\n');
}
