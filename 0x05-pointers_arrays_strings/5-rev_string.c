#include "main.h"

/**
 *rev_string - reverse the string.
 *@s: pointer to string.
 *
 *Return: void.
 */
void rev_string(char *s)
{
	int i, j;
	char temp;
	int len = strlen(s);

	for (i = 0, j = len - 1; i < j; i++, j--)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
	}
}
