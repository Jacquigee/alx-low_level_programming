#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - the beginning of the program
 * @argc: the number of arguments
 * @argv: array of pointer to arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
