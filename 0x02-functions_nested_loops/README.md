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
Write a function that checks for lowercase character.
#include "main.h"
/**
 * _islower - checks if input is lowercase
 * @c: variable to determine if input is lowercase
 * Return: 0 if succesful
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
	return (1);
	}
else
	return (0);
}
Write a function that checks for alphabetic character.
#include "main.h"
/**
 * _isalpha - Entry Point
 * @c: - char
 * Return: 0 (Success)
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
	return (1);
	}
	else
	{
	return (0);
	}
}
Write a function that prints the sign of a number.
#include "main.h"
/**
 * print_sign - check input if its positive, negative or zero
 * @n: variable to determine if input is greater than, less than or is zero
 * Return: 0 if succesful
 */
int print_sign(int n)
{

	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	if (n < 0)
	{
		_putchar('-');
	}
	return (-1);
}
Write a function that computes the absolute value of an integer.
#include "main.h"
/**
 * _abs - Entry Point
 * @num: integer
 * Return: 0 (Success)
 */
int _abs(int num)
{
	if (num < 0)
	{
		return (-num);
	}
	else
	{
		return (num);
	}
}
Write a function that prints the last digit of a number.
#include "main.h"
/**
  * print_last_digit - Prints the last digit of a number
  * @n: The number to be treated
  *
  * Return: Value of the last digit of number
  */
int print_last_digit(int n)
{
	int last;

	last = n % 10;

	if (last < 0)
	{
		last = last * -1;
	}

	_putchar(last + '0');

	return (last);
}
Write a function that prints every minute of the day of Jack Bauer, starting from 00:00 to 23:59.
#include "main.h"
/**
 * jack_bauer - Entry Point
 */
void jack_bauer(void)
{
	int hh, mm;

	for (hh = 0; hh < 24; hh++)
	{
		for (mm = 0; mm < 60; mm++)
		{
			_putchar((hh / 10) + '0');
			_putchar((hh % 10) + '0');
			_putchar(':');
			_putchar((mm / 10) + '0');
			_putchar((mm % 10) + '0');
			_putchar('\n');
		}
	}
}
