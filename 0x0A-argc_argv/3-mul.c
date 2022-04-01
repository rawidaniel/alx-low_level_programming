#include <stdio.h>
#include <stdlib.h>
/**
 * main - check the code
 *@argc: the number of command line arguments
 *@argv: an array containing the program command line argument
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int i, multiply = 1;

	if (argc != 1)
	{
	for (i = 1; i < argc; i++)
	{
		multiply *= atoi(argv[i]);
	}
		printf("%d\n", multiply);
	} else
	{
		printf("Error\n");
	}
	return (0);
}
