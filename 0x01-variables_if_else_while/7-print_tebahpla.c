#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char j;

	for (j = 'z'; j >= 'a'; j--)
	{
		putchar(j);
	}
	putchar('\n');
	return (0);
}
