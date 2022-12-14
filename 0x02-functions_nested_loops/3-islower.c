#include "main.h"
#include "ctype.h"

/**
 * islower - checks if a character is lowercase if YES it returns 1
 * otherwise returns 0 just like islower() function in ctype.h
 * @c: Is the int value to be compared with the ASCII value
 * Return: 0 if successful. _islower - Entry point
 */

int _islower(int c)
{
	if (islower(c))
	{
		return (1);
	}
	else
	{
		return (0);
}
}
