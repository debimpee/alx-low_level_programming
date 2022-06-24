#include <stdio.h>

/**
 * main - a program that prints the number of arguments passed into it.
 * @argc: the number of arguents passed into the program
 * @argv: An array of pointers to the argument
 *
 * Return: Always 0
 */
int main(int argc, char __attribute__((__unused__)) *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
