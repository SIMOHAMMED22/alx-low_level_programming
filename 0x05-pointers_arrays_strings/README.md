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
