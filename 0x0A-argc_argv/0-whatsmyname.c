#include <stdio.h>
/**
 * main - Print name of program
 * @argc: number of content in argv
 * @argv: array of command line arguments
 * Return: 0
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
