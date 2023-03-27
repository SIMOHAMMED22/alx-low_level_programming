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
