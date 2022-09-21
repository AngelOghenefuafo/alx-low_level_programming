#include "main.h"

/**
 * cap_string -> Capitalizes all words in a string
 * @x: string parameter
 *
 * Return: capitalized version of the string.
 */
char *cap_string(char *x)
{
	char spc[] = {32, '\t', '\n', 44, ';', 46, '!', '?', '"', '(', ')', '{', '}'};
	int len = 13;
	int a = 0, i;

	while (x[a])
	{
		i = 0;
		while (i < len)
		{
			if ((a == 0 || s[a - 1] == spc[i]) && (s[a] >= 97 && s[a] <= 122))
				s[a] -= 32;
			i++;
		}
		a++;
	}
	return (x);
}
