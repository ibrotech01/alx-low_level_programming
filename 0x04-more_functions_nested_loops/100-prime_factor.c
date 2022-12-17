#include <stdio.h>

/**
 * main - print prime
 * Return: 0
 */

int main(void)
{
	unsigned long int i = 3, n = 612852475143;
	/** blank line*/
	for (; i < 12057; i += 2)
	{
		for (; i < 12057; i += 2)
			n /= i;
	}
	printf("%lu\n", n);
	return (0);
}
