#include <stdio.h>

/**
 * add - function that adds two integer values
 *
 * @a: first integer value
 * @b: second integer value
 * Return: sum of @a and @b
 */
int add(int a, int b)
{
return (a + b);
}

/**
 * sub - function that subtracts one integer value from another
 *
 * @a: integer value to be subtracted from
 * @b: integer value to subtract
 * Return: result of subtracting @b from @a
 */
int sub(int a, int b)
{
return (a - b);
}

/**
 * mul - function that multiplies two integer values
 *
 * @a: first integer value
 * @b: second integer value
 * Return: product of @a and @b
 */
int mul(int a, int b)
{
return (a * b);
}

/**
 * div - function that performs integer division
 *
 * @a: dividend (numerator)
 * @b: divisor (denominator)
 * Return: quotient of @a divided by @b, or 0 if @b is zero
 *         If @b is zero, an error message is printed.
 */
int div(int a, int b)
{
if (b != 0)
{
return (a / b);
}
else
{
printf("Error: Division by zero\n");
return (0);
}
}

/**
 * mod - function that calculates the modulo of two integer values
 *
 * @a: dividend (numerator)
 * @b: divisor (denominator)
 * Return: remainder of @a divided by @b, or 0 if @b is zero
 *         If @b is zero, an error message is printed.
 */
int mod(int a, int b)
{
if (b != 0)
{
return (a % b);
}
else
{
printf("Error: Modulo by zero\n");
return (0);
}
}
