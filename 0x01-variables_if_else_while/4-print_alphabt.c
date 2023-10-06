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

	for (c = 97; c < 101; c++)
	{
		putchar(c);
	}
	for (c = 102; c < 113; c++)
	{
		putchar(c);
	}
	for (c = 114; c < 122; C++)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
