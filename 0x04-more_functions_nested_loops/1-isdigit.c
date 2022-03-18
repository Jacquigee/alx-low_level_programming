#include "main.h"

/**
 * _isdigit - Checks for a digit (0 through 9)
 *  @c: The int value of character to evaluate
 *
 *  Return: 1 if digit, otherwise return 0.
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}
