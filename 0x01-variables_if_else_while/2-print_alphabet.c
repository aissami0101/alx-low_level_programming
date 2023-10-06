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

	c = 97;
	while (c <= 122)
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
