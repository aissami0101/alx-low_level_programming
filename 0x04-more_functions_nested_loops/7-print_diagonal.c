#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal.
 * @n: is the number of times the character \ should be printed
 */

void print_diagonal(int n)
{
	int s;

	if (n == 0)
	{
		_putchar('\n');
	}
	else
	{
		for (s = 1; s <= n; s++)
		{
			if (s == n)
			{
				_putchar('\\');
		
			}
			else
				_putchar(' ');
		}
		_putchar('\n');
	}
}
