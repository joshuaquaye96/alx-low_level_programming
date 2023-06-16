#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int n, o;

	for (n = 48; n <= 56; n++)
	{
		for (o = 49; o <= 57; o++)
		{
			if (o > n)
			{
				putchar(n);
				putchar(o);
				if (n != 56 || o != 57)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
