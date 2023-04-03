#include "main.h"
/**
 * _memset - Fill memory with constant byte
 * @s: memory area
 * @b: constant byte
 * @n: number of bytes
 * Return: 0
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
