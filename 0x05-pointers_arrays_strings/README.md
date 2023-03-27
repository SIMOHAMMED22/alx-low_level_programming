Write a function that takes a pointer to an int as parameter and updates the value it points to to 98.

Prototype: void reset_to_98(int *n);
#include "main.h"
/**
 *reset_to_98 - resets value in address referenced by pointer.
 *@n: pointer.
 *
 *Return: void.
 */
void reset_to_98(int *n)
{
	*n = 98;
}
Write a function that swaps the values of two integers.

Prototype: void swap_int(int *a, int *b);
#include "main.h"
/**
 *swap_int - swap value of two ints.
 *@a: pointer to one int.
 *@b: pointer to second int.
 *
 *Return: void.
 */
void swap_int(int *a, int *b)
{
	int temp = *a;

	*a = *b;
	*b = temp;
}
Write a function that returns the length of a string.

Prototype: int _strlen(char *s);
FYI: The standard library provides a similar function: strlen. Run man strlen to learn more.
#include "main.h"
/**
 *_strlen - finds and outputs length of string.
 *@s: pointer to string.
 *
 *Return: length of a string.
 */
int _strlen(char *s)
{
	int i;

	i = 0;
	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}
Write a function that prints a string, followed by a new line, to stdout.

Prototype: void _puts(char *str);
FYI: The standard library provides a similar function: puts. Run man puts to learn more.
#include "main.h"
/**
 *_puts - prints string followed by newline.
 *@str: pointer to string.
 *
 *Return: void.
 */
void _puts(char *str)
{
	int i;

	i = 0;
	while (*str != '\0')
	{
		_putchar(*str);
		i++;
		str++;
	}
	_putchar('\n');
}
Write a function that prints a string, in reverse, followed by a new line.

Prototype: void print_rev(char *s);
#include "main.h"
/**
 *print_rev - prints strin in reverse.
 *@s: pointer to string.
 *
 *Return: void.
 */
void print_rev(char *s)
{
	int length, last;

	length = 0;
	while (s[length] != '\0')
	{
		length++;
	}

	last = length - 1;
	for (; last >= 0; last--)
	{
		_putchar(s[last]);
	}
	_putchar('\n');
}
Write a function that reverses a string.

Prototype: void rev_string(char *s);
#include "main.h"
/**
 *rev_string - reverse the string.
 *@s: pointer to string.
 *
 *Return: void.
 */
void rev_string(char *s)
{
	int i, j, k, temp;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	k = 0;
	j = i - 1;

	while (k < j)
	{
		temp = s[k];
		s[k] = s[j];
		s[j] = temp;
		k++;
		j--;
	}
}
Write a function that prints every other character of a string, starting with the first character, followed by a new line.

Prototype: void puts2(char *str);
#include "main.h"
/**
 *puts2 - prints very other character in string.
 *@str: pointer to string.
 *
 *Return: void.
 */
void puts2(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
		i++;
	}
	_putchar('\n');
}
Write a function that prints half of a string, followed by a new line.

Prototype: void puts_half(char *str);
The function should print the second half of the string
If the number of characters is odd, the function should print the last n characters of the string, where n = (length_of_the_string - 1) / 2
#include "main.h"
/**
 *puts_half - prints half of a string.
 *@str: pointer to string.
 *
 *Return: void.
 */
void puts_half(char *str)
{
	int n, length, mid;

	length = 0;
	while (str[length] != '\0')
	{
		length++;
	}

	if (length % 2 == 0)
	{
		mid = length / 2;
		for (n = mid; n < length; n++)
		{
			_putchar(str[n]);
		}
	}
	else
	{
		mid = (length - 1) / 2;
		for (n = mid + 1; n < length; n++)
		{
			_putchar(str[n]);
		}
	}
	_putchar('\n');
}
Write a function that prints n elements of an array of integers, followed by a new line.

Prototype: void print_array(int *a, int n);
where n is the number of elements of the array to be printed
Numbers must be separated by comma, followed by a space
The numbers should be displayed in the same order as they are stored in the array
You are allowed to use printf
#include "main.h"
#include <stdio.h>
/**
 *print_array - prints n elements of an array of integers.
 *@a: pointer to array.
 *@n: number of array elements.
 *
 *Return: void.
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != n - 1)
		{
			printf(",");
			printf(" ");
		}
	}
	printf("\n");
}
