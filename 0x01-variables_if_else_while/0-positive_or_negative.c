#include <stdlib.h>
#include <time.h>
/**
 * main - read the variabl n
 * if n > 0 prints is positive
 * if n < 0 prints is negative
 * if n = 0 prints is zero
 *
 * Return: Always 0 (Success)
 */


int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	
	if (n > 0)
	{
		printf("is positive\n");
	}
	else if (n = 0)
	{
		printf("is zero\n");
	}
	else if(n < 0)
	{
		printf("is negative\n");
	}

	return (0);
}

