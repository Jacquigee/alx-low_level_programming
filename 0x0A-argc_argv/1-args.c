#include "main.h"
#include <stdio.h>

/**
 * main - beginning of the program
 * @argc: the number of arguments
 * @argv: array of pointers to arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
