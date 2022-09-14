#include "main.h"

/**
 * _isalpha - Entry point
 * @c: check on character
 * Description: checks for alphabet
 * Return: returns 0 or 1 depending on condition
 */

int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
