#include "variadic_functions.h"
/**
 * print_strings - prints strings
 * @separator: separarte the string
 * @n: varibale numbers of argument
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ag;
	unsigned int i;
	char *s;

	if (n > 0)
	{
		va_start(ag, n);
		for (i = 1; i <= n; i++)
		{
			s = va_arg(ag, char *);
			if (s == NULL)
			{
				printf("(nil)");
			}
			else
			{
				printf("%s", s);
			}
			if (i != n && separator != NULL)
			printf("%s", separator);
		}
		va_end(ag);
	}
	printf("\n");
}
