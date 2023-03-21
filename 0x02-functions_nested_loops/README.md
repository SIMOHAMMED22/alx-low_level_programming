#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void) 
{
        printf("_putchar\n");
        return (0);
}
Write a function that prints the alphabet, in lowercase, followed by a new line.
#include "main.h"
/**
 * main - Entry Point
 * Return: 0 (Success)
 */
int main(void)
{
	_putchar('_');
	_putchar('p');
	_putchar('u');
	_putchar('t');
	_putchar('c');
	_putchar('h');
	_putchar('a');
	_putchar('r');
	_putchar('\n');
	return (0);
}
Write a function that prints 10 times the alphabet, in lowercase, followed by a new line.
#include "main.h"
/**
 * print_alphabet - prints out the alphabet
 * written by mkhaoua
 * Return: 0 if succesful
 */
void print_alphabet(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		_putchar(alpha);
	}
	_putchar('\n');
}
Write a function that prints 10 times the alphabet, in lowercase, followed by a new line.
#include "main.h"
/**
 * print_alphabet_x10 - Entry Point
 * Return: 0 (Sucess)
 */
void print_alphabet_x10(void)
{
	int j = 0;
	char alpha;

	while (j < 10)
	{
	alpha = 'a';
	while (alpha <= 'z')
	{
	_putchar(alpha);
	alpha++;
	}
	_putchar('\n');
	j++;
	}
}
