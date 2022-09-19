#include "main.h"
#include <stdio.h>
/**
 * _puts - print a string
 *@str: pointer to a string to print
 *
 * Return: Always 0
 */
void _puts(char *str);
{
	int a = 5;

	while (str[a])
	{
		_putchar(str[a]);
		a++;
	}
	_putchar('\n');
}
