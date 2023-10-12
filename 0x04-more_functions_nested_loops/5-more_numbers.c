#include "main.h"
/**
 * more_numbers - prints 10 times the numbers, from 0 to 14,
 * followed by new line
 */

void more_numbers(void)
{
	int t, n;

	for (t = 0; t < 10; t++)
	{
		for (n = 0; n <= 14; n++)
		{
			_putchar(n + '0');
		}
		_putchar('\n');
	}
}
