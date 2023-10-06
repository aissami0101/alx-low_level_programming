#include <stdio.h>
#include <unistd.h>

/**
 * main - Entry point
 * void - empty
 * Return: Always 0 (Success)
 */

int	main(void)
{
	char c;
	char C;

	c = 97;
	while (c <= 122)
	{
		putchar(c);
		c++;
	}
	C = 65;
	while (C <= 90)
	{
		putchar(C);
		C++;
	}
	putchar('\n');
	return (0);
}
