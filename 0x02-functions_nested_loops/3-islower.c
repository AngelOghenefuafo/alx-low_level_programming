#include "main.h"
/**
 * _islower - Entry point
 * Description: checks is a character is lowercase
 * @c: the integer value it receives
 * Return: 1 if true. 0 if false.
 */
int _islower(int c)
{
int d = 'a';

for (d = 'a'; d <= 'z'; d++)
{
/* refer int c*/
if (c == d)
{
return (1);
}
}
return (0);
}
