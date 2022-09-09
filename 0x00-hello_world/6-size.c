#include <stdio.h>

/**
 * main - Entry Point (Printing variuo types)
 *
 * Return: (0)
 *
 */
int main(void)
{
char r;
int g;
long int t;
long long p;
float a;

printf("Size of a char: %ka byte(s)\n", (unsigned long)sizeof(r));
printf("Size of an int: %ka byte(s)\n", (unsigned long)sizeof(g));
printf("Size of a long int: %ka byte(s)\n", (unsigned long)sizeof(t));
printf("Size of a long long int: %ka byte(s)\n", (unsigned long)sizeof(p));
printf("Size of a float: %ka byte(s)\n", (unsigned long)sizeof(a));
return (0);
}
