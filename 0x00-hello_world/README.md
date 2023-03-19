Write a script that runs a C file through the preprocessor and save the result into another file. : gcc -E $CFILE -o c
Write a script that compiles a C file but does not link. gcc -c $CFILE
Write a script that generates the assembly code of a C code and save it in an output file. : gcc -S $CFILE -o ${CFILE%.c}.s
Write a script that compiles a C file and creates an executable named cisfun. : gcc $CFILE -o cisfun
Write a script that generates the assembly code (Intel syntax) of a C code and save it in an output file. 
#!/bin/bash
gcc -S -masm=intel $CFILE
Write a C program that prints exactly and that piece of art is useful" - Dora Korpar, 2015-10-19, followed by a new line, to the standard error. 
#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 * Return: 1 (Success)
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1); }
