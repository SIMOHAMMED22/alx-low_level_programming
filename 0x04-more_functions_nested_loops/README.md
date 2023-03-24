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
