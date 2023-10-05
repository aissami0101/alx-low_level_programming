#include <stdio.h>
#include <unistd.h>
void puts(void);
int main(void)
{
	puts(void);
	return 0;
}

void	puts(void)
{
	write (1, "Programming is like building a multilingual puzzle\n", 51);
}	
