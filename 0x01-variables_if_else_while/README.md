This program will assign a random number to the variable n each time it is executed. Complete the source code in order to print whether the number stored in the variable n is positive or negative.
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry Point
 * Return: 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	else
		printf("%d is zero\n", n);
	return (0);
}
This program will assign a random number to the variable n each time it is executed. Complete the source code in order to print the last digit of the number stored in the variable n.
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry Point
 * Return: 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if ((n % 10) > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, n % 10);
	}
	else if ((n % 10) == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, n % 10);
	}
	else
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, n % 10);
	}
	return (0);
}
Write a program that prints the alphabet in lowercase, followed by a new line.
#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry Point
 * Return:0 (Success)
 */
int main(void)
{
	char alpha;

	alpha = 'a';
	while (alpha <= 'z')
	{
		putchar(alpha);
		alpha++;
	}
	putchar('\n');
	return (0);
}
Write a program that prints the alphabet in lowercase, and then in uppercase, followed by a new line.
#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry Point
 * Return:0 (Success)
 */
int main(void)
{
	char alpHA;

	for (alpHA = 'a'; alpHA <= 'z'; alpHA++)
		putchar(alpHA);
	for (alpHA = 'A'; alpHA <= 'Z'; alpHA++)
		putchar(alpHA);
	putchar('\n');
	return (0);
}
Write a program that prints the alphabet in lowercase, followed by a new line.
#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry Point
 * Return:0 (Success)
 */
int main(void)
{
	char alpha, e, q;

	e = 'e';
	q = 'q';

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		if (alpha != e && alpha != q)
			putchar(alpha);
	}
	putchar('\n');
	return (0);
}
Write a program that prints all single digit numbers of base 10 starting from 0, followed by a new line.
#include <unistd.h>
#include <stdio.h>
/**
 * main - Entry Point
 * Return:0 (Success)
 */
int main(void)
{
	int nbr;

	for (nbr = 0; nbr <= 9; nbr++)
	{
		printf("%d", nbr);
	}
	putchar('\n');
	return (0);

}
