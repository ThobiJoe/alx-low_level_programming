#include "main.h"
/**
 * _isalpha - Entry Point
 * Description: Check if arguement entered is an alphabet
 * Return: 1 or 0
 * @c: Character to be checked
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	return (0);
}
