#include "main.h"
#include <ctype.h>

/**
 * _isupper - checks for uppercase letters
 *  @c: the int value of character to evaluate
 *
 *  Return: 1 if uppercase, otherwise returns 0
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	return (0);
}
