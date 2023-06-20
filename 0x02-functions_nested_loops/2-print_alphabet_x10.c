#include "main.h"

/**
 * print_alphabet_x10 - Prints lowercase alphabets 10 times
 */

void print_alphabet_x10(void)
{
	char num, l;

	for (num = 0; num <= 9; num++)
	{
		for (l = 'a'; l <= 'z'; l++)
		{
			_putchar(l);
		}
		_putchar('\n');
	}
}
