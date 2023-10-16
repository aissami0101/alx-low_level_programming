#include "main.h"
/**
 * print_rev - prints a string, in reverse, followed by a new line.
 * @s: pointer that point to string.
 */
void print_rev(char *s)
{
	int i;

	for (i = '\0' - 1; s[i] >= 0; i++)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
