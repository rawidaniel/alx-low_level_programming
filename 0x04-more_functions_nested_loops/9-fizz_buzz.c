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
		putchar(32);
	}
	else if (i % 3 == 0)
	{
		printf("Fizz");
		putchar(32);
	}
	else if (i % 5 == 0)
	{
		printf("Buzz");
		putchar(32);
	}
	else
	{
		printf("%d", i);
		putchar(32);
	}
	}
	printf("\n");
	return (0);
}
