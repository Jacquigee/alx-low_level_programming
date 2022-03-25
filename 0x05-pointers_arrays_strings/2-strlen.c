#include "main.h"

/**
 * _strlen - function that returns the length of a string
 * @s: The string
 *
 * Return: the long of a string as an integer number
 */
int _strlen(char *s)
{
	int q = 0;

	while (*(s + q) != '\0')
		q++;

	return (q);
}
