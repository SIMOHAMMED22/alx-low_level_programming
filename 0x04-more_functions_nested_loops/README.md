Write a function that checks for uppercase character.

Prototype: int _isupper(int c);
Returns 1 if c is uppercase
Returns 0 otherwise
#include "main.h"
/**
 * _isupper - Entry function
 * @c : integer
 * Return: 1 if c is uppercase, 0 otherwise
*/
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
Write a function that checks for a digit (0 through 9).

Prototype: int _isdigit(int c);
Returns 1 if c is a digit
Returns 0 otherwise
#include "main.h"
/**
 * _isdigit - Entry Function
 * @c: integer
 * Return: 1 if c is a digit, 0 otherwise
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
Write a function that multiplies two integers.

Prototype: int mul(int a, int b);
#include "main.h"
/**
 * mul - Entry Function
 * @a: integer
 * @b: integer
 * Return: res (Success)
 */
int mul(int a, int b)
{
	int res;

	res = a * b;
	return (res);
}
Write a function that prints the numbers, from 0 to 9, followed by a new line.

Prototype: void print_numbers(void);
You can only use _putchar twice in your code
#include "main.h"
/**
 * print_numbers - Entry Function
 * Return: 0 (Success)
 */
void print_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		_putchar(i + '0');
	}
		_putchar('\n');
}
Write a function that prints the numbers, from 0 to 9, followed by a new line.

Prototype: void print_most_numbers(void);
Do not print 2 and 4
You can only use _putchar twice in your code
#include "main.h"
/**
 * print_most_numbers - Entry Function
 * Return: 0 (Success)
 */
void print_most_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
	if (i != 2 && i != 4)
	{
	_putchar(i + '0');
	}
	}
	_putchar('\n');
}
