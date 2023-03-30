#include "main.h"
#include <string.h>
/**
 * _strcat -  merge two strings
 * Description: Merging two strings
 * @dest: String one
 * @src: String two
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
	char str1[50], str2[50];

	strcpy(str1, dest);
	strcpy(str2, src);
	strcat(str1, str2);
	strcpy(dest, str1);
	return (dest);
}
