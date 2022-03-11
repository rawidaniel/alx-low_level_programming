#include <stdio.h>
/**
* main - main block
 * Description: Print all possible combinations of two digits.
 * Numbers must be separated by commas and a space.
 * 01 and 10 are considered as the same combination of the two digits.
 * Print only the smallest combination of two digits.
 * Numbers should be printed in ascending order, with two digits.
 * You can only use `putchar`.
 * You can only use `putchar` up to 5 times.
 * You are not allowed to use any variable of type `char`.
 * Return: 0
 */
int main(void)
{
	int x, y, z;

	x = 0;

	while (x < 100)
	{
		y = x % 10;
		z = x / 10;

		if (z < y)
		{
			putchar(z + '0');
			putchar(y + '0');

			if (x < 89)
			{
				putchar(44);
				putchar(32);
			}
		}

		x++;
	}
	putchar('\n');

	return (0);
}
