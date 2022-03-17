#include <stdio.h>
/**
 * main - check the mode
 *
 * Return: Always 0
 */
int main(void)
{
	int i;
	int size = 100;


	for (i = 1; i <= size; i++)
	{
	if (i % 5 == 0 && i % 3 == 0)
	{
		printf("FizzBuzz");
		printf(" ");
	}
	else if (i % 3 == 0)
	{
		printf("Fizz");
		printf(" ");
	}
	else if (i % 5 == 0)
	{
		printf("Buzz");
		printf(" ");
	}
	else
	{
		printf("%d", i);
		printf(" ");
	}
	}
	printf("\n");
	return (0);
}
