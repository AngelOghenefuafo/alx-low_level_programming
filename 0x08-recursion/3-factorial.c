#include "main.h"

/**
 * factorial -> returns factorial of a given number
 * @n: given number
 *
 * Return: Factorial of the number
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factoria(n - 1));
}
