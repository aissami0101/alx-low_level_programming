#include "main.h"

/**
 * print_alphabet - prints alphabet in lowercases.
 *
 * Return: Always 0.
 */

void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
