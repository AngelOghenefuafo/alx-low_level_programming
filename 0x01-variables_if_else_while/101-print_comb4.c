#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 * Description: prints all possible combination of 2-digit numbers
 * Return: Always 0 (success)
 */
int main(void)
{
	int r, u, l, j;

	for (r = 48; r <= 57; r++)
	{
		for (u = 48; u <= 57; u++)
		{
			for (l = 48; l <= 57; l++)
			{
				for (j = 48; j <= 57; j++)
				{
				if (((l + j) > (r + u) &&  l >= r) || r < l)
				{
					putchar(r);
					putchar(u);
					putchar(l);
					putchar(j);

					if (r + u + l + j == 227 && r == 57)
					{
					break;
					}
					else
					{
					putchar(',');
					putchar(' ');
					}
				}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
