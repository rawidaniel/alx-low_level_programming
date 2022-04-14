#include "variadic_functions.h"

/**
 * print_char -print character
 * @valist: valist
 */
void print_char(va_list valist)
{
	printf("%c", va_arg(valist, int));
}

/**
 * print_int -print integer
 * @valist: valist
 */
void print_int(va_list valist)
{
	printf("%d", va_arg(valist, int));
}

/**
 * print_float -print float number
 * @valist: valist
 */
void print_float(va_list valist)
{
	printf("%f", va_arg(valist, double));
}

/**
 * print_string -print string
 * @valist: valist
 */
void print_string(va_list valist)
{
	char *s = va_arg(valist, char *);

	if (s == NULL)
		printf("(nil)");
	else
		printf("%s", s);
}

/**
 * print_all - print everything
 * @format: string
 */
void print_all(const char * const format, ...)
{
	va_list ag;
	char *separator = "";
	int i, j = 0;

	Data choice[] = { {'c', print_char},
			{'i', print_int},
			{'f', print_float},
			{'s', print_string},
			{'\0', NULL} };
	va_start(ag, format);
	while (format != NULL && format[j] != '\0')
	{
		i = 0;
		while (choice[i].letter != '\0')
		{
			if (choice[i].letter == format[j])
			{
				printf("%s", separator);
				choice[i].ptr(ag);
				separator = ", ";
			}
			i++;
		}
		j++;
	}
	va_end(ag);
	printf("\n");
}
