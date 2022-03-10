# Description for each script
1. 0-preprocessor
   * Scripts that runs a C file saved in variable $CFILE through the preprocessor and save the result into another file(c file).
2. 1-compiler
   * Script that compiles a C file but does not link.The output name will be the same as the c file but with the extension .o instead of .c.
3. 2-assembler
   * Script that generates the assembly code of a C code and save it in an output file. The output will be named the same as the C file, but with the extension .s instead of .c.
4. 3-name
   * Script that compiles a C file and creates an executable named cisfun.
5. 4-puts.c
   * A C program that prints exactly "Programming is like building a multilingual puzzle, followed by a new line. Using puts function and the program should end with the value 0.
6. 5-printf.c
   * A C program that prints exactly with proper grammar, but the outcome is a piece of art,, followed by a new line using printf function and the program should return 0 and compile without warning when using the -Wall gcc option.
7. 6-size.c
   * A C program that prints the size of various types on the computer it is compiled and run on. Warnings are allowed and the program will return 0.
8. 100-intel
   * Script that generates the assembly code (Intel syntax) of a C code and save it in an output file.
