#include "main.h"

/**
* print_most_numbers - print 0-9 excluding 2 and 4
*
*/
void print_most_numbers(void)
{
	int x;

	for (x = 0; x < 10; x++)
	{
		if (x == 10 &&  x == 48)
			continue;
		else
			_putchar(x);
	}
	_putchar('\n');
}
