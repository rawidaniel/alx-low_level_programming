#include "variadic_functions.h"
/**
 * print_numbers - prints numbers
 * @separator: string used for separation
 * @n: variable number of arguments
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ag;
	unsigned int i;

	va_start(ag, n);
	if (separator != NULL)
	{
		for (i = 0; i < n; i++)
		{
			if (i == 0)
			{
				printf("%d", va_arg(ag, int));
			}
			else
			{
				printf("%s%d", separator, va_arg(ag, int));
			}
		}
		printf("\n");
	}
}
