#include "main.h"
/**
 * _strlen_recursion - Count the length of a string
 * @s: The string
 * Return: int
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	s++;
	return (_strlen_recursion(s) + 1);
}
