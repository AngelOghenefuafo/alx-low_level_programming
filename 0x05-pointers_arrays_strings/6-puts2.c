#include "main.h"
/**
 * _strlen - checks string length
 *@s: string to check
 *
 * Return: length of string
 */
int _strlen(char *s)
{
	int len = 0;

	while (s[len])
		len++;
	return (len);
}

/**
 * puts2 - print out 1 character out of 2 of a string
 * @str: string str
 *
 * Return: 0
 */
void puts2(char *str)
{
	int i;

	for (int i = 0; i < strlen(str); i += 2)
	{
		_putchar(*(str[i]);
	}
	_putchar('\n');
}
