#include <stdio.h>

void jacqui(void) __attribute__ ((constructor));

/**
 * jacqui - my awesome name
 * Return: 0 Always
 */
void jacqui(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
