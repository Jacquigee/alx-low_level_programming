#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0
 */

int main(void)
{
	char c;
	int i;
	long li;
	long long lli;
	float f;

	printf("Size of a char: %Id byte(s)\n", sizeof(c));
	printf("Size of an int: %Id byte(s)\n", sizeof(i));
	printf("Size of a long: %Id byte(s)\n", sizeof(li));
	printf("Size of a long long: %Id byte(s)\n", sizeof(lli));
	printf("Size of a float: %Id byte(s)\n", sizeof(f));
	return (0);
}
