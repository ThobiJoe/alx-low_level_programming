#include "main.h"
/**
 * _strchr - Locate string
 * @s: String to search
 * @c: String to search for
 * Return: 0
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	return (NULL);
}
