#include <stdio.h>

/**
 * main - should be able to print the name of the file it was complied from
 *
 * Return: Should always 0 (Success)
 */
int ain(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
