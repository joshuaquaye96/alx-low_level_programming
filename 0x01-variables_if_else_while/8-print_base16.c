#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int v;
	char w;

	for (v = 48; v < 58; v++)
	{
		putchar(v);
	}
	for (w = 'a'; w <= 'f'; w++)
	{
		putchar(w);
	}
	putchar('\n');
	return (0);
}
