#include <stdio.h>
/**
 * main - check the code
 *@argc: the number of command line arguments
 *@argv: an array containing the program command line argument
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		if (i == 0)
		{
			printf("%s\n", argv[i]);
		}
	}
	return (0);
}
