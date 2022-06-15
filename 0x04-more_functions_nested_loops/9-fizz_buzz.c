#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int num;

	for (num = 1; num <= 100; num++)
	{
		if ((num % 3) != 0 && (num % 5) != 0)
			printf("%d", num);
		printf(" ");
		if ((num % 3) == 0)
			printf("Fizz");
		if ((num % 5) == 0)
			printf("Buzz");
		if ((num % 3) == 0 && (num % 5) == 0)
			printf("FizzBuzz");
	}
	printf("\n");
	return (0);
}
