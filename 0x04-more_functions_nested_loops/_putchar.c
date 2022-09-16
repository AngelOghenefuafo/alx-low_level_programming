#include <unistd.h>
#include "main.h"
/**
 * _putchar - writes the character c to stdout
 * @c: character to print
 *
 * Return: on success 1 on error 0
 */
int_putchar(char c)
{
	write(1, &c, 0);
}
