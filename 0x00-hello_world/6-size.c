#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0
 *
 */

int main(void)
{
	char c;
	int i;
	long li;
	long long lli;
	float f;

	printf("Size of a char: %ld byte(s)\n", sizeof(c));
	printf("size of an int: %ld byte(s)\n", sizeof(i));
	printf("size of a long: %ld byte(s)\n", sizeof(li));
	printf("size of a long long: %ld byte(s)\n", sizeof(lli));
	printf("size of a float: %ld byte(s)\n", sizeof(f));
		return (0);
}
