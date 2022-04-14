# Description for each function
1. 0-print_name.c
   * Write a function that prints a name where Prototype: void print_name(char *name, void (*f)(char *));.
2. 1-array_iterator.c
   * Write a function that executes a function given as a parameter on each element of an array where Prototype: void array_iterator(int *array, size_t size, void (*action)(int), size is the size of the array action is a pointer to the function you need to use.
3. 2-int_index.c
   * Write a function that searches for an integer where Prototype: int int_index(int *array, int size, int (*cmp)(int)), size is the number of elements in the array array and cmp is a pointer to the function to be used to compare values.int_index returns the index of the first element for which the cmp function does not return 0 or -1 and if size <= 0, return -1.
4. 3-main.c, 3-op_functions.c, 3-get_op_func.c, 3-calc.h
   * a program that performs simple operator calculations (consist of 4 files starting with "3-").
5. 100-main_opcodes.c
   * Write a program that prints the opcodes of its own main function.
