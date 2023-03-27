#include "main.h"
/**
 * rev_string - Reverse String
 * @s: The string to be reversed
 * Return: 0
 */
void rev_string(char *s)
{
	int i = 0, j = 0;
	char k;

	while (s[i++])
	{
		j++;
	}
	for (i = j - 1; i >= j / 2; i--)
	{
		k = s[i];
		s[i] = s[j - i - 1];
		s[j - i - 1] = k;
	}
}
