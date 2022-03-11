#include <stdio.h>
#include <ctype.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alpha;
	char cap;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		putchar(alpha);
	}
	for (cap = 'A'; cap <= 'Z'; cap++)
	{
		putchar(cap);
	}
	putchar('\n');
	return (0);
}
