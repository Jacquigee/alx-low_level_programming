#include "main.h"
#include <stdio.h>

/**
 * main - the beginning of the program
 * @argc: the number of arguments
 * @argv: array of pointers to arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
