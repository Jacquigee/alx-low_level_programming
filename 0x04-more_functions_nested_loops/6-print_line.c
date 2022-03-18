#include "main.h"

/**
 * print_line - draws a strait line in the terminal
 *@n: Straight line in the terminal
 *
 * Return: Always 0 (Success)
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
		_putchar('_');
	_putchar('\n');
}
