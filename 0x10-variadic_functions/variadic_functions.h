#ifndef VARIADICFUNCTION_H
#define VARIADICFUNCTION_H

#include <stdio.h>
#include <stdarg.h>
int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

/**
 * lptr - struct
 * @letter: specify the data type
 * @ptr: a pointer to function
 */
typedef struct lptr
{
	char letter;
	void (*ptr)(va_list);
} Data;
#endif

