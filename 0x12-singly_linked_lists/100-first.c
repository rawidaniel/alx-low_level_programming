#include <stdio.h>
/**
 * execute_before_main - execute this function before main function
 */
void execute_before_main(void) __attribute__ ((constructor));
void execute_before_main(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
