#include <stdio.h>

/**
 * main - print all possible combinations of single digits
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
		if (n != 57)
		{
			putchar(',');
			putchart(' ');
		}
		putchar('\n');
		return (0);
	}
}
