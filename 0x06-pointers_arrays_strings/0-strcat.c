#include "main.h"
/**
 * _strcat -> function to Concatenate two strings
 * @dest: first parameter
 * @src: second parameter
 *
 * Return: a string
 */
char *_strcat(char *dest, char *src)
{
	int len = 0, t;

	while (dest[len])
		len++;

	for (t = 0; src[t] != '\0'; t++)
	{
		dest[len] = src[t];
		len += 1;
	}
	dest[len] = '\0';
	return (dest);
}
